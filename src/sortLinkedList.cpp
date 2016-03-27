

/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	struct node *p;
	p = head;
	int c=0,i, j, k, temp;
	while (p != '\0')
	{
		p = p->next;
		c = c + 1;
	}
	for (i = 0; i < c - 1; i++)
	{
		p = head;
		//q = p->next;
		for (j = 0; j < c-i-1; j++)
		{
			if (p->num >( p->next)->num)
			{
				temp = p->num;
				p->num = (p->next)->num;
				(p->next)->num = temp;
			}
			p = p->next;
		}
	}
	return head;
}
