#ifndef __QUEUE_STRUCT__
#define __QUEUE_STRUCT__

#include <stdbool.h>

#define QUEUE_MINIMAL_NODE	0
#define QUEUE_MAXIMAL_NODE	5

#ifdef __QUEUE_A__ 
/* caller handle definition */
typedef struct _QUEUE_H_
{
	int front;
	int rear;
	int size;
	int capacity;
	
	/* array pointer */
	int *queue;
} QUEUE_H, *PQUEUE_H;

bool queue_init 	(QUEUE_H *h, int capacity);
bool queue_destroy 	(QUEUE_H *h);
bool queue_is_full	(QUEUE_H *h);
bool queue_is_empty	(QUEUE_H *h);
bool queue_enqueue	(QUEUE_H *h, int x);
int  queue_dequeue	(QUEUE_H *h);

#else /* __QUEUE_L__ */

#endif /* __QUEUE_A__ */

#endif	/* __QUEUE_STRUCT__ */
