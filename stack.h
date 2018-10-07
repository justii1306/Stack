struct stack_handle
{int top;
int *dane;
};

void push(struct stack_handle* s,int a);
int pop(struct stack_handle* s);
void clear(struct stack_handle* s);
void init(struct stack_handle* s);
void finalize(struct stack_handle* s);


