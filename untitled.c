#include<stdio.h>
#include<stdlib.h>
#define max=10;
int queue[max];
int front=-1,rear=-1;
void insert(void);
void main(){
	printf("the inserted lement is\n");
	insert()
	getch()
}
void insert(){
	int num;
	printf("enter the number to be inserted  in the queue\n");
	scanf("%d",&num);
	if (rear=max-1)
	{
		printf("overflow\n");
	}
	else if(front==-1&&rear==-1){
		front=rear=0;
	}
	else{
		rear++
	}
	queue[rear]=num;
}