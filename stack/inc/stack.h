#ifndef __STACK_STRUCT__
#define __STACK_STRUCT__

#include <stdbool.h>

#define STACK_MINIMAL_NODE	0
#define STACK_MAXIMAL_NODE	10

#ifdef __STACK_A__ 
/* caller handle definition */
typedef struct _SLIST_H_
{
	/* top of the stack */
	int top;

	/* size of the stack */
	int cap;
	
	/* stack pointer */
	int *stack; //[STACK_MAXIMAL_NODE];
} STACK_H, *PSTACK_H;

bool stack_init 	(STACK_H *h, int capacity);
bool stack_destroy 	(STACK_H *h);
bool stack_push		(STACK_H *h, int x);
int  stack_pop		(STACK_H *h);
bool stack_is_empty	(STACK_H *h);
bool stack_is_full	(STACK_H *h);
void stack_print	(STACK_H *h);

#else /* __STACK_L__ */

#endif /* __STACK_A__ */

#endif	/* __STACK_STRUCT__ */
