/*********************************************
 * David Sellers
 * CS 414
 * Implement a list interpreter.
 * C was chosen for getChar

*********************************************/
#include <stdio.h>
#include <string.h>

typedef struct {
	char data[255];
	struct node* next;
} node;

int main() {

	char input[255];
	node* head_ptr = NULL;
	node* pos_ptr = NULL;
	
	node t;
	head_ptr = &t;
	pos_ptr = &t;
	
	t.next = NULL;

	printf("%s\n", t.data);

	input[0] = 1;
	while(input[0] != '\n') {

		printf(">>> ");
		scanf("%s", pos_ptr->data);
		if(t.data[0] == '(') {
			//scanf("%s", t.data);
			printf("Get command.\n");
		}
		else if(t.data[0] == '\'') {
			node s;
			t.next = &s;
			s.next = NULL;
			//scanf("%s", s.data);
			printf("Get arguments.\n");
		}
		else {

			printf("other\n");
		}
	pos_ptr = head_ptr;
	while(pos_ptr != NULL) {
		printf("%s", pos_ptr->data);
		pos_ptr = pos_ptr->next;
	}

	}
}
