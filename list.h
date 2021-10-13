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

class List {
private:
	string  data;
	List* next = NULL;

public:
	string car() {
		return data;
	}

	string cdr() {
		if(next == NULL) {
			return next;
		}
		else {
			next.cdr();
		}
	}

	string cons() {
		List temp;
		temp->data = data;
		return data;
			
	}	
};
