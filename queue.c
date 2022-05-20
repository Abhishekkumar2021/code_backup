#include<stdio.h>
#define SIZE 100

struct queue{
	int rear;
	int front;
	int arr[SIZE];
};

void push(struct queue* Q,int x){
	if(Q->rear==SIZE-1){
		printf("Sorry! queue is full\n");
		return;
	}
	Q->rear++;
	Q->arr[Q->rear] = x;
}

int pop(struct queue* Q){
	if(Q->rear<Q->front){
		printf("Sorry! Your queue is empty\n");
		return 0;
	}
	Q->front++;
	return Q->arr[Q->front-1];
}

void print(struct queue* Q){
	for(int i=Q->front; i<=Q->rear; i++)
		printf("%d ",Q->arr[i]);
	printf("\n");
}

int isempty(struct queue* Q){
	if(Q->rear<Q->front)
		return 1;
	else 
		return 0;
}

int isfull(struct queue* Q){
	if(Q->rear==SIZE-1)
		return 1;
	else 
		return 0;
}


int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
   struct queue Q;
   Q.rear = -1;
   Q.front = 0;
    pop(&Q);
     pop(&Q);
      pop(&Q);
      push(&Q,10);
      push(&Q,10);
      push(&Q,10);
      push(&Q,10);
      push(&Q,10);
      print(&Q);

}