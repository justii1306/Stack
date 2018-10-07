#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include <stdbool.h>

#define STACKSIZE 8
int stacksize = STACKSIZE;

void init(struct stack_handle* s)
{
	s->top=0;
    	s->dane = (int *)malloc(stacksize * sizeof(int));
}

void finalize(struct stack_handle* s)
{
	free(s->dane);
}

void clear(struct stack_handle* s)
{
	s->top=0;
}

void push(struct stack_handle* s,int a)
{
	if (s->top>=stacksize){
		s->dane = (int*) realloc (s->dane, 2*stacksize * sizeof(int));
                stacksize=stacksize*2;
	}
	s->dane[s->top++]=a;
}

int pop(struct stack_handle* s)
{
	if(s->top==0){
        finalize(s);
        assert(s->top>0);}
	return s->dane[--s->top];
}

bool isempty(struct stack_handle* s){
	return (s->top==0 ? true : false);

}

