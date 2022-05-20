#include<stdio.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *createList(int n){
	int i=0;
	int data;
     struct Node* head = NULL;
     struct Node* tail = NULL;
      while(i<n){
      scanf("%d",&data);
        struct Node* n;
        n->data = data;
        if(head==NULL){
         tail=n;
          head = n;
        }
        else{
            tail->next=n;
            tail = tail->next;
          }
          i++;
      }
      return head;
}

void printList(struct Node *myList){
	struct Node *temp = myList;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

struct Node *reverseList(struct Node *myList){
     if(myList==NULL  || myList->next== NULL)
		return myList;
	struct Node* ans = reverseList(myList->next);
    struct Node *last = myList->next;     
    last->next = myList;
    myList->next = NULL;
    return ans;
}

int main(){
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif
	struct Node *myList =createList(4);
	printList(myList);
}