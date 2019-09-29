#include<stdio.h>

#ifndef LL_H
#define LL_H
struct queue
{
	int data;
	struct queue *next;
};

struct queue * rear=NULL;
struct queue * front=NULL;



void enqueue(struct queue ** rear,struct queue ** front,int info);
void dequeue(struct queue ** front);
void display_queue(struct queue * front);
#endif 