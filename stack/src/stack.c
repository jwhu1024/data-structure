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

int stack_peek (STACK_H *h)
{
	STACK_DBG("BEGIN\n");
	if (stack_is_empty(h) == true)
	{
		STACK_PRT_ERR("Stack is empty\n");
		return -1;
	}

	return h->stack[h->top-1];
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
	return;
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
bool stack_init (STACK_NODE_H *h)
{
	STACK_DBG("BEGIN\n");
	
	/* head pointer initialize */
	h->top = (struct stack_node *) malloc (sizeof(struct stack_node));
	if (h->top == NULL)
	{
		STACK_PRT_ERR("Please checking your memory is enough\n");
		return false;
	}

	/* init data */
	h->top->data = -1;

	/* init next pointer to NULL */
	h->top->next = NULL;
	
	STACK_DBG("END\n");
	return true;
}

bool stack_destroy (STACK_NODE_H *h)
{
	STACK_DBG("BEGIN\n");

	int cnt = 0;
	struct stack_node *tmp;

	while (h->top != NULL)
	{
		tmp = h->top;
		h->top = h->top->next;
		free(tmp);
		cnt++;
	}

	STACK_DBG("Release %d data in stack\n", cnt);
	STACK_DBG("END\n");
	return true;
}

bool stack_push (STACK_NODE_H *h, int x)
{
	STACK_DBG("BEGIN\n");

	if (h->top->data == -1)
	{
		h->top->data = x;
		h->top->next = NULL;
	}
	else
	{
		struct stack_node *tmp;
		
		/* allocate memory */
		tmp = (struct stack_node *) malloc (sizeof(struct stack_node));
		if (tmp == NULL)
		{
			STACK_PRT_ERR("Please checking your memory is enough\n");
			return false;
		}

		tmp->next = h->top;
		tmp->data = x;
		h->top = tmp;
	}

	STACK_PRT_DBG("%d pushed to stack\n", h->top->data);
	STACK_DBG("END\n");
	return true;
}

int stack_pop (STACK_NODE_H *h)
{
	STACK_DBG("BEGIN\n");

	int data;
	struct stack_node *tmp;

	if (h->top->data == -1)
	{
		STACK_PRT_ERR("Stack have no nodes to pop\n");
		return false;
	}

	data = h->top->data;
	tmp = h->top;
	h->top = h->top->next;

	/* release the unused memory */
	if (tmp != NULL)
		free (tmp);

	STACK_DBG("END\n");
	return data;
}

int stack_peek (STACK_NODE_H *h)
{
	STACK_DBG("BEGIN\n");
	return 1;
}

bool stack_is_empty(STACK_NODE_H *h)
{
	if (h->top == NULL)
	{
		return true;
	}
	return (h->top->data == -1);
}

void stack_print(STACK_NODE_H *h)
{
	STACK_DBG("BEGIN\n");

	int cnt = 1;
	struct stack_node *tmp = h->top;

	if (tmp == NULL)
	{
		return;
	}
	
	while (tmp != NULL)
	{
		STACK_PRT_DBG("[%d] -> %d\n", cnt, tmp->data);
		tmp = tmp->next;
		cnt++;
	} 
	STACK_DBG("END\n");
	return;
}
#endif /* __STACK_A__ */
