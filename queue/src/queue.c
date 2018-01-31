#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "debug.h"
#include "queue.h"

#define QUEUE_DBG(message, ...)	\
 			MSG("%s" message "%s", YELLOW, ##__VA_ARGS__, RESET)
 		
#define QUEUE_PRT_DBG(message, ...)	\
			MSG("%s" message "%s", CYAN, ##__VA_ARGS__, RESET)

#define QUEUE_PRT_ERR(message, ...)	\
			MSG("%s" message "%s", LIGHT_RED, ##__VA_ARGS__, RESET)

#ifdef __QUEUE_A__
bool queue_init (QUEUE_H *h, int capacity)
{
	QUEUE_DBG("BEGIN\n");

	/* initialize queue handle */
	h->capacity = capacity;
	h->front = h->rear = -1;
	h->size = 0;
	
	/* initialize array */
	h->queue = (int *) calloc (h->capacity, sizeof(int));
	
	QUEUE_DBG("END\n");
	return true;
}

bool queue_destroy (QUEUE_H *h)
{
	QUEUE_DBG("BEGIN\n");
	
	h->capacity = h->size = 0;
	h->front = h->rear = -1;
	
	if (h->queue)
	{
		free (h->queue);
		h->queue = NULL;
	}
	
	QUEUE_DBG("END\n");
	return true;
}

bool queue_is_full	(QUEUE_H *h)
{
	return (h->size == h->capacity);
}

bool queue_is_empty	(QUEUE_H *h)
{
	return (h->size == 0);
}

bool queue_enqueue (QUEUE_H *h, int x)
{
	QUEUE_DBG("BEGIN\n");

	/* checking queue is full */
	if (queue_is_full(h) == true)
	{
		QUEUE_PRT_ERR("Queue is full\n");
		return false;
	}

	if (h->front == -1)
		h->front = 0;

	h->rear += 1;
	h->queue[h->rear] = x;
	h->size++;
	
	QUEUE_PRT_DBG("%d enqueue to queue\n", x);
	QUEUE_DBG("END\n");
}

int queue_dequeue (QUEUE_H *h)
{
	QUEUE_DBG("BEGIN\n");
	int item;

	/* checking queue is empty before dequeue */
	if (queue_is_empty(h) == true)
	{
		QUEUE_PRT_ERR("Queue is empty\n");
		return false;
	}

	item = h->queue[h->front];
	h->front += 1;
	h->size--;
	
	QUEUE_DBG("END\n");
	return item;
}

void queue_print(QUEUE_H *h)
{
	QUEUE_DBG("BEGIN\n");
	int i;

	// QUEUE_DBG("front: %d, rear: %d\n", h->front, h->rear);
	QUEUE_PRT_DBG("-----------\n");
	for (i=h->front; i<=h->rear; ++i)
	{
		QUEUE_PRT_DBG("[%d] -> %d\n", i, h->queue[i]);
	}	
	QUEUE_PRT_DBG("-----------\n");
	QUEUE_DBG("END\n");
	return;
}
#else /* __QUEUE_L__ */
	/* TBD */
#endif /* __QUEUE_A__ */
