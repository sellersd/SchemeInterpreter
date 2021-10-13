/*********************************************
 * David Sellers
 * CS 414
 * Implement a list interpreter.
 * Linked list to hold data.
 * Resources:
 * https://github.com/carld/micro-lisp/blob/master/micro-lisp.c
 * https://carld.github.io/2017/06/20/lisp-in-less-than-200-lines-of-c.html
 * https://www.youtube.com/watch?v=Y26T5KO34jE&list=PLWUx_XkUoGTrXOU0pFa_OVGA-6voiIEAt&index=2
*********************************************/

#include <iostream>
#include <cstring>
#include <stdio.h>
// #include "list.h"

using namespace std;

int is_space(char x) { return x == ' '; }
int is_paren(char x) { return x == '(' || x == ')'; }
int is_quote(char x) { return x == '\''; }
char token[255];
char look;
int str_pos;
char input[255];

void prompt() {
	printf(">>> ");
}

void tokenize() {
	cout << "Enter tokenize\n";
	int index = 0;
	
	// Skip whitespace
	while(is_space(look)) {
		cout << "Found space\n";
		look = input[str_pos++]; // read whitespace and ignore
	}

	// If parentheses, found command.
	if(is_paren(look)) {
		cout << "Found paren\n";
		//cout << look;
		look = input[str_pos++];
		while(!is_paren(look)
			//&& !is_quote(look)
			//&& !is_space(look)i
			) {			
			cout << look;
			cout << "index " << index << endl;
			token[index] = look;
			index++;
			look = input[str_pos++];
		}
	}

	// If quote, found arguments.
	else if(is_quote(look)) {
		cout << "Found quote\n";
		str_pos += 2;
		look = input[str_pos++];
		while(!is_paren(look)) {
			cout << "data" << look << endl;
		}
	}

	token[index] = '\0';
	cout << "\ntoken " << token << endl;
}

void evaluate() {
	if(strcmp(token, "car")){
		cout << "Call car for head of current list" << endl;
	}
	else if(strcmp(token, "cdr")){
		cout << "Call cdr for head of current list" << endl;
	}
	else if(strcmp(token, "cons")){
		cout << "Call cons" << endl;
	}
	else {
		cout << "Unrecognized command." << endl;
	}
}

int main() {

	prompt();
	cin.get(input, 255);
	look = input[str_pos++];

	while(strcmp(input,"quit")) {
		cout << "Entering repl loop" << endl;
		tokenize();
		prompt();
		cin.get(input, 255);
		
		//int index = 0;
	//	while(token[index] != '\0') {
	//		cout << token[index];
	//		index++;
	//	}

	}

	return 0;

}
