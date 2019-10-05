#ifndef _INCLUDED_STACK_
#define _INCLUDED_STACK_
#include<stdint.h>
#define MAX_DEPTH 32
typedef struct _stack_ stack;
typedef struct _stack_result_ stackResult;

#define STACK_OK 0
#define STACK_FULL 1
#define STACK_EMPTY 3

struct _stack_
{
	int32_t size;
	int32_t top;
	float data[MAX_DEPTH];
};

struct _stack_result_
{
	float data;
	uint32_t status;
};

stack stack_new(uint32_t size);
uint32_t stack_full(const stack *stk);
uint32_t stack_empty(const stack *stk);
stack* stack_push(stack *stk, float element, stackResult *res);
stack* stack_peek(stack *stk, stackResult *res);

#endif