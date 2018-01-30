#ifndef __STACK_STRUCT__
#define __STACK_STRUCT__

#include <stdbool.h>

#define STACK_MINIMAL_NODE	0
#define STACK_MAXIMAL_NODE	10

#ifdef __STACK_A__ 
/* caller handle definition */
typedef struct _STACK_H_
{
	/* top of the stack */
	int top;

	/* size of the stack */
	int cap;
	
	/* stack pointer */
	int *stack;
} STACK_H, *PSTACK_H;

bool stack_init 	(STACK_H *h, int capacity);
bool stack_destroy 	(STACK_H *h);
bool stack_push		(STACK_H *h, int x);
int  stack_pop		(STACK_H *h);
int  stack_peek		(STACK_H *h);
bool stack_is_empty	(STACK_H *h);
bool stack_is_full	(STACK_H *h);
void stack_print	(STACK_H *h);

#else /* __STACK_L__ */

/* caller handle definition */
typedef struct _STACK_NODE_H_
{
	/* pointer to the top node in stack */
	struct stack_node *top;
} STACK_NODE_H, *PSTACK_NODE_H;

/* list node definition */
struct stack_node
{
	int data;
	struct stack_node *next;
};

bool stack_init 	(STACK_NODE_H *h);
bool stack_destroy 	(STACK_NODE_H *h);
bool stack_push		(STACK_NODE_H *h, int x);
int  stack_pop		(STACK_NODE_H *h);
int  stack_peek		(STACK_NODE_H *h);
bool stack_is_empty	(STACK_NODE_H *h);
void stack_print	(STACK_NODE_H *h);

#endif /* __STACK_A__ */

#endif	/* __STACK_STRUCT__ */
