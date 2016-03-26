/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	int digit;
	struct node *start = NULL;
	if (N < 0)
		N = N - (2 * N);
	do
	{
		digit = N % 10;
		struct node *newnode;
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = digit;
		newnode->next = start;
		start = newnode;
		N /= 10;
	} while (N > 0);
	return start;

}


	
