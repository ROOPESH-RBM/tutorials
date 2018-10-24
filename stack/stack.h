struct list_item {
	int item;
	struct list_item* next;
};


struct stack_ {
    struct list_item* at_top = NULL;
};

typedef struct stack_* stack;

export stack create_stack();
export int push(int val, stack s);
export int pop(stack s, int* status = NULL);
export int is_empty(stack s);
export int is_full(stack s);
export int peek(stack s, int* status = NULL);
