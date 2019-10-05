#include<stdio.h>
#include<assert.h>
#include "stack.c"

// void test_empty_stack()
// {
// 	stack s = stack_new(6);
// 	stack *stk = &s;
// 	assert(stack_full(stk) == 0);
// 	assert(stack_empty(stk) == 1);
// }

int main()
{
	// test_empty_stack();
	stack s = stack_new(6);

	stack *stk = &s;
	stackResult res;


	assert(stack_full(stk) == 0);
	assert(stack_empty(stk) == 1);
	
	stk = stack_push(stk, 10, &res);
	// stk = stack_peek(stk, &res);
	stk = stack_push(stk, 20, &res);
	stk = stack_push(stk, 50, &res);
	stk = stack_peek(stk, &res);
	stk = stack_pop(stk, &res);
	printf("\n%f\n", stk->data[stk->top]);
	return 0;
}