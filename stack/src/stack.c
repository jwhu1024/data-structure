#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "debug.h"
#include "clist.h"

#define CLIST_DBG(message, ...)	\
 			MSG("%s" message "%s", YELLOW, ##__VA_ARGS__, RESET)
 		
#define CLIST_PRT_DBG(message, ...)	\
			MSG("%s" message "%s", CYAN, ##__VA_ARGS__, RESET)

#define CLIST_PRT_ERR(message, ...)	\
			MSG("%s" message "%s", LIGHT_RED, ##__VA_ARGS__, RESET)

static bool clist_ins_check_valid_range(CLIST_NODE_H *h, int idx);
static bool clist_rmv_check_valid_range(CLIST_NODE_H *h, int idx);

/* initialize */
bool clist_init (CLIST_NODE_H *h)
{
	CLIST_DBG("BEGIN\n");

	/* head pointer initialize */
	h->head = (struct clist_node *) malloc (sizeof(struct clist_node));
	if (h->head == NULL)
	{
		CLIST_PRT_ERR("Please checking your memory is enough\n");
		return false;
	}

	/* init custom data structure (not use in head pointer) */
	memset(&h->head->custom_data, '\0', sizeof(CLIST_CUSTOM_DATA));

	/* init next pointer for head */
	h->head->next = NULL;	

	/* pointer current to head */
	h->cur = h->head;

	/* set the number of the node to zero */
	h->count = 0;

	CLIST_DBG("END\n");
	return true;	
}

/* destroy */
bool clist_destroy (CLIST_NODE_H *h)
{
	CLIST_DBG("BEGIN\n");

	int i;
	struct clist_node *tmp, *dup_h = h->head;

#ifdef __DEBUG__
	int i_cnt = 0;
#endif

	for (i = 0; i <= h->count; i++)
	{
		tmp = h->head;
		h->head = h->head->next;
		free(tmp);
		tmp = NULL;
				
#ifdef __DEBUG__
				i_cnt++;
#endif
	}

	h->head = h->cur = NULL;

	CLIST_DBG("Release %d data in list\n", i_cnt-1);
	CLIST_DBG("END\n");
	return true;
}

/* insert node API */
bool clist_insert_node_front (CLIST_NODE_H *h, PCLIST_CUSTOM_DATA data)
{
	CLIST_DBG("BEGIN\n");
	struct clist_node *tmp;

	/* allocate memory */
	tmp = (struct clist_node *) malloc (sizeof(struct clist_node));
	if (tmp == NULL)
	{
		CLIST_PRT_ERR("Please checking your memory is enough\n");
		return false;
	}
	
	tmp->next = (h->count == 0) ? h->head : h->head->next;
	h->head->next = tmp;
	h->cur = tmp;
	
	/* copy user data */
	memcpy(&tmp->custom_data, data, sizeof(CLIST_CUSTOM_DATA));

	/* increase the number of node */
	h->count++;
	
	CLIST_DBG("END\n");
	return true;
}

bool clist_insert_node_tail (CLIST_NODE_H *h, PCLIST_CUSTOM_DATA data)
{	
	CLIST_DBG("BEGIN\n");

	struct clist_node *tmp;

	/* allocate memory */
	tmp = (struct clist_node *) malloc (sizeof(struct clist_node));
	if (tmp == NULL)
	{
		CLIST_PRT_ERR("Please checking your memory is enough\n");
		return false;
	}
	
	/* this node is first node */
	if (h->count == 0)
	{
		h->head->next = tmp;
	}
	else
	{
		/* find the last node in current list */
		struct clist_node *tail = h->head->next;
		while (tail->next != h->head)
		{
			tail = tail->next;
		}
		tail->next = tmp;	
	}
	
	tmp->next = h->head;
	h->cur = tmp;

	/* copy user data */
	memcpy(&tmp->custom_data, data, sizeof(CLIST_CUSTOM_DATA));

	/* increase the number of node */
	h->count++;
	
	CLIST_DBG("END\n");
	return true;
}

bool clist_insert_node_index (CLIST_NODE_H *h, PCLIST_CUSTOM_DATA data, int idx)
{
	CLIST_DBG("BEGIN\n");

	/* check valid range of the index */
	if (clist_ins_check_valid_range(h, idx) == true)
	{
		CLIST_PRT_ERR("Please checking your index not out of the range\n");
		return false;
	}

	if (idx == 1)									/* insert front */
	{
		clist_insert_node_front(h, data);
	}
	else if (idx == h->count + 1)					/* insert tail */
	{
		clist_insert_node_tail(h, data);
	}
	else											/* insert middle */
	{
		unsigned int l_idx = 1;
		struct clist_node *tmp, *next;
		struct clist_node *cur = h->head->next;

		/* allocate memory */
		tmp = (struct clist_node *) malloc (sizeof(struct clist_node));
		if (tmp == NULL)
		{
			CLIST_PRT_ERR("Please checking your memory is enough\n");
			return false;
		}

		/* find the node by index */
		while (cur != h->head && idx-1 != l_idx)
		{
			cur = cur->next;
			l_idx++;
		}

		next = cur->next;
		cur->next = tmp;
		tmp->next = next;
		h->cur = tmp;
		
		/* copy user data */
		memcpy(&tmp->custom_data, data, sizeof(CLIST_CUSTOM_DATA));

		/* increase the number of node */
		h->count++;
	}
	
	CLIST_DBG("END\n");
	return true;
}

/* remove node API */
bool clist_remove_node_front (CLIST_NODE_H *h)
{
	CLIST_DBG("BEGIN\n");
	
	struct clist_node *tmp;
	
	/* less than one node in the list */
	if (h->count <= 0)
	{
		return false;
	}

	if (h->count == 1 && h->head->next != NULL)
	{
		tmp = h->head->next;
		h->head->next = NULL;
		h->cur = h->head;
	}
	else
	{
		tmp = h->head->next;
		h->head->next = h->cur = tmp->next;
	}

	free(tmp);
	tmp = NULL;
	
	/* decrease the number of node */
	h->count--;
	
	CLIST_DBG("END\n");
	return true;
}

bool clist_remove_node_tail (CLIST_NODE_H *h)
{
	CLIST_DBG("BEGIN\n");

	struct clist_node *tmp;
	
	/* less than one node in the list */
	if (h->count <= 0)
	{
		return false;
	}
	
	if (h->count == 1 && h->head->next != NULL)
	{
		tmp = h->head->next;
		h->head->next = NULL;
		h->cur = h->head;
	}
	else
	{
		/* find the last node in current list */
		struct clist_node *prev;
		struct clist_node *tail = h->head->next;
		while (tail->next != h->head)
		{
			prev = tail;
			tail = tail->next;
		}

		prev->next = tail->next;
		h->cur = prev;
		free(tail);
		tail = NULL;
	}

	/* decrease the number of node */
	h->count--;
	
	CLIST_DBG("END\n");
	return true;
}

bool clist_remove_node_index (CLIST_NODE_H *h, int idx)
{
	CLIST_DBG("BEGIN\n");

	/* check valid range of the index */
	if (clist_rmv_check_valid_range(h, idx) == true)
	{
		CLIST_PRT_ERR("Please checking your index not out of the range\n");
		return false;
	}

	if (idx == 1)									/* remove front */
	{
		clist_remove_node_front(h);
	}
	else if (idx == h->count)						/* remove tail */
	{
		clist_remove_node_tail(h);
	}
	else											/* remove middle */
	{
		unsigned int l_idx = 1;
		struct clist_node *cur;
		struct clist_node *prev = h->head->next;

		/* find the node by index */
		while (prev != h->head && idx-1 != l_idx)
		{
			prev = prev->next;
			l_idx++;
		}
		
		cur = prev->next;
		prev->next = cur->next;
		h->cur = prev;
		
		free(cur);
		cur = NULL;
		
		/* increase the number of node */
		h->count--;
	}
	
	CLIST_DBG("END\n");
	return true;
}

void clist_print (CLIST_NODE_H *h)
{
	CLIST_DBG("BEGIN\n");

	short cnt = 1;
	struct clist_node *tmp;
	
	if (h->count > 0)
	{
		tmp = h->head->next;
		do
		{
			CLIST_PRT_DBG("[%d]\tName: %s,\t\tAge: %d\n", cnt++, tmp->custom_data.name, tmp->custom_data.age);
			tmp = tmp->next;
		} while (tmp != h->head);
	}
	else
	{
		CLIST_PRT_DBG("list is empty\n");
	}

	CLIST_PRT_DBG("----------------------------------\n");	
	CLIST_DBG("END\n");
	return;
}

/* search in clist
*  Return: false if not in list
*		   true if in list
*/
bool clist_search_node (CLIST_NODE_H *h, char *name)
{
	CLIST_DBG("BEGIN\n");

	int x = 1;
	
	if (strlen(name) <= 0)
	{
		CLIST_PRT_ERR("Length of the string is abnormal\n");
		return false;
	}

	if (h->head == NULL || h->count <= 0)
	{
		CLIST_PRT_ERR("List has some problem\n");
		return false;
	}
	
	h->cur = h->head->next;
    while (h->cur != h->head)
    {
        if (strncmp(h->cur->custom_data.name,
					name,
					strlen(name)) == 0)
        {
        	CLIST_DBG("[%d] Name: %s, Age: %d\n", x,
									h->cur->custom_data.name,
									h->cur->custom_data.age);
			return true;
		}
		h->cur = h->cur->next;
		x++;
    }

	CLIST_DBG("END\n");
	return false;
}

/* get clist length */
int clist_length (CLIST_NODE_H *h)
{
	return h->count;
}

static bool clist_ins_check_valid_range(CLIST_NODE_H *h, int idx)
{
	return (idx < CLIST_MINIMAL_NODE	||
			idx > CLIST_MAXIMAL_NODE	||
			idx > h->count+1) 
			? true : false;
}

static bool clist_rmv_check_valid_range(CLIST_NODE_H *h, int idx)
{
	return (idx < CLIST_MINIMAL_NODE	||
			idx > CLIST_MAXIMAL_NODE	||
			idx > h->count) 
			? true : false;
}
