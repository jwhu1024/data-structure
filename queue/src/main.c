#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "debug.h"
#include "queue.h"

#define MAIN_DBG(message, ...)	\
 			MSG("%s" message "%s",   LIGHT_GREEN, ##__VA_ARGS__, RESET)

#define MAIN_PRT_DBG(message, ...)	\
			MSG("%s" message "%s", CYAN, ##__VA_ARGS__, RESET)

int main (int argc, char* argv[])
{
	MAIN_DBG("BEGIN\n");

#ifdef __QUEUE_A__

	QUEUE_H h;
	srand(time(NULL));

	if (false == queue_init(&h, QUEUE_MAXIMAL_NODE))
	{
		return -1;
	}
	
	if (true == queue_is_empty(&h))
	{
		MAIN_DBG("Queue is empty\n");
	}

	/* enqueue four data to queue */
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_print(&h);

	if (true == queue_is_full(&h))
	{
		MAIN_DBG("Queue is full\n");
	}

	/* dequeue three data from queue */
	MAIN_PRT_DBG("%d dequeue from queue\n", queue_dequeue(&h));
	MAIN_PRT_DBG("%d dequeue from queue\n", queue_dequeue(&h));
	MAIN_PRT_DBG("%d dequeue from queue\n", queue_dequeue(&h));
	queue_print(&h);

	/* enqueue two data to queue */
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_enqueue(&h, (rand() % 100) + 1);
	queue_print(&h);
	
	/* dequeue three data from queue */
	MAIN_PRT_DBG("%d dequeue from queue\n", queue_dequeue(&h));
	MAIN_PRT_DBG("%d dequeue from queue\n", queue_dequeue(&h));	
	MAIN_PRT_DBG("%d dequeue from queue\n", queue_dequeue(&h));
	queue_print(&h);
	
	if (false == queue_destroy(&h))
	{
		MAIN_DBG("memory destroy has some problems!\n");
		return -1;
	}
	
#else	/* __QUEUE_L__ */
	/* TBD */

#endif /* __QUEUE_A__ */

	MAIN_DBG("END\n");
	return 0;
}
