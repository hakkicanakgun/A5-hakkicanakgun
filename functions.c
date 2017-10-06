#include<stdio.h>

#include "DEFINE.H"

Node *my_reverse(Node *head){
	Node *current = head;
	Node *p=NULL,*q;
	int loop=1;

	/*Goes to the end of the given linked list*/
	while(current->next->next!=NULL){
		current = current->next;
	}

	/*At first we need to create memory for the first element
	of the reverse_list. We use q as a current pointer of the
	reverse list*/
	p = malloc(sizeof(Node));
	q=p;
	p->var = current->var;
	p->next=NULL;

	/*this loop goes to last node of the linked list, assigns var to
	reverse list's new node's var then frees last node*/
	while(loop){
		current = head;
		if(current->next==NULL){/*if we have one element in our list*/
			q->next = malloc(sizeof(Node));
			q->next->var = current->var;
			q->next->next=NULL;
			free(current);
		}
		else{
			while(current->next->next!=NULL){/*Goes to last node*/
				current=current->next;
			}
			q->next = malloc(sizeof(Node));/*creates memory*/
			q->next->var=current->next->var;
			q->next->next = NULL;
			free(current->next);
			current->next = NULL;
			q = q->next;
		}
	}
	return p;
}
