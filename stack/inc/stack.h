#ifndef __CIRCULAR_LINKED_LIST__
#define __CIRCULAR_LINKED_LIST__

#include <stdbool.h>

#define CLIST_MINIMAL_NODE	1
#define CLIST_MAXIMAL_NODE	100

/* caller handle definition */
typedef struct _CLIST_NODE_H_
{
	/* number of the nodes in list */
	unsigned short count;
	
	/* pointer to the first node in list */
	struct clist_node *head;

	/* just pointer to last node we operated */
	struct clist_node *cur;
} CLIST_NODE_H, *PCLIST_NODE_H;

/* custom structure */
typedef struct _CLIST_CUSTOM_ {
	int age;
	char name[16];
} CLIST_CUSTOM_DATA, *PCLIST_CUSTOM_DATA;

/* list node definition */
struct clist_node
{
	CLIST_CUSTOM_DATA custom_data;
	struct clist_node *next;
};

/* create and destroy */
bool clist_destroy (CLIST_NODE_H *h);
bool clist_init (CLIST_NODE_H *h);

/* clist insert function */
bool clist_insert_node_front (CLIST_NODE_H *h, PCLIST_CUSTOM_DATA data);
bool clist_insert_node_tail (CLIST_NODE_H *h, PCLIST_CUSTOM_DATA data);
bool clist_insert_node_index (CLIST_NODE_H *h, PCLIST_CUSTOM_DATA data, int idx);

/* clist remove function */
bool clist_remove_node_front (CLIST_NODE_H *h);
bool clist_remove_node_tail (CLIST_NODE_H *h);
bool clist_remove_node_index (CLIST_NODE_H *h, int idx);

/* search in clist */
bool clist_search_node (CLIST_NODE_H *h, char *name);

/* get clist length */
int clist_length (CLIST_NODE_H *h);

/* clist debug method */
void clist_print (CLIST_NODE_H *h);

#endif	/* __CIRCULAR_LINKED_LIST__ */
