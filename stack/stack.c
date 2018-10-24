#include<stdlib.h>

#include "stack.h"

stack create_stack() {
	stack s = (stack) malloc (sizeof (struct Stack_));
	
	return s;
}

int push(int val, stack s) {
	struct list_item* new_item = (struct list_item*) malloc ( sizeof (struct list_item) );
	if ( new_item == NULL )
		return 1;
	new_item->next = s->at_top;
	s->at_top = new_item;
	return 0;
}

int pop(stack s, int* status = NULL) {
	struct list_item* new_top;
	int val;
	if( s->at_top == NULL) {
	    if (status != NULL)
			*status = 1;
		return 0;
	}
	new_top = s->at_top->next;
	val = s->at_top->item;
	free(s->at_top);
	if (status != NULL)
		*status = 0;
	return val;
}

int is_empty(stack s) {
	if ( s->at_top == NULL )
		return 1;
	else
		return 0;
}

int is_full(stack s) {
	return 0;
}

int peek(stack s, int* status = NULL) {
	
	if( s->at_top == NULL ) {
		if (status != NULL)
			*status = 1;
		return 0;
	}
	
	if (status != NULL)
		*status = 0;
	
	return s->at_top->item;
	
}
