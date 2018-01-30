#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "debug.h"
#include "stack.h"

#define STACK_DBG(message, ...)	\
 			MSG("%s" message "%s", YELLOW, ##__VA_ARGS__, RESET)
 		
#define STACK_PRT_DBG(message, ...)	\
			MSG("%s" message "%s", CYAN, ##__VA_ARGS__, RESET)

#define STACK_PRT_ERR(message, ...)	\
			MSG("%s" message "%s", LIGHT_RED, ##__VA_ARGS__, RESET)


#ifdef __STACK_A__ 
bool stack_init (STACK_H *h, int capacity)
{
	STACK_DBG("BEGIN\n");

	/* initialize stack parameter */
	h->top = STACK_MINIMAL_NODE;
	h->cap = (capacity >= STACK_MAXIMAL_NODE) ? STACK_MAXIMAL_NODE : capacity;

	/* initialize stack array */
	h->stack = (int *) malloc (sizeof(int) * h->cap);
	if (h->stack == NULL)
	{
		STACK_PRT_ERR("Please checking your memory is enough\n");
		return false;
	}
	
	STACK_DBG("END\n");
	return true;
}

bool stack_push (STACK_H *h, int x)
{
	STACK_DBG("BEGIN\n");
	
	if (stack_is_full(h) == true)
	{
		STACK_PRT_ERR("Stack is full!\n");
		return false;
	}

	/* push the data into stack */
	h->stack[h->top++] = x;

	STACK_PRT_DBG("%d pushed to stack\n", x);
	STACK_DBG("END\n");
	return true;
}

int stack_pop (STACK_H *h)
{
	STACK_DBG("BEGIN\n");
	if (stack_is_empty(h) == true)
	{
		STACK_PRT_ERR("Stack is empty\n");
		return -1;
	}

	/* pop the data from stack */
	return h->stack[--h->top];
}

bool stack_is_empty(STACK_H *h)
{
	return (h->top == STACK_MINIMAL_NODE);
}

bool stack_is_full (STACK_H *h)
{
	return (h->top == h->cap);
}

void stack_print(STACK_H *h)
{
	STACK_DBG("BEGIN\n");
	int i;
	STACK_PRT_DBG("|-----------\n");
	for (i = h->top-1; i >= STACK_MINIMAL_NODE; --i)
	{
		STACK_PRT_DBG("| [%d] -> %d\n", i, h->stack[i]);
	}	
	STACK_PRT_DBG("|-----------\n");
	STACK_DBG("END\n");
	return true;
}

bool stack_destroy (STACK_H *h)
{
	STACK_DBG("BEGIN\n");
	
	if (h->stack && h->cap > STACK_MINIMAL_NODE)
	{
		free (h->stack);
		h->stack = NULL;
		STACK_DBG("Free the memory for stack pointer\n");
	}

	h->top = h->cap = STACK_MINIMAL_NODE;
	STACK_DBG("END\n");
	return true;
}

#else /* __STACK_L__ */

#endif /* __STACK_A__ */
