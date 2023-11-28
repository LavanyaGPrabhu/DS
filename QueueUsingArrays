#include <stdio.h>
#include <stdlib.h>
int front=-1;
int rear=-1;
int que[10];
void enqueue(int data){
    if(isFull()){
        printf("Queue Overflow.\n");
    }
    else if(rear==-1&&front==-1){
        front=0;
        que[++rear]=data;
        printf("%d is successfully Enqueued into the Queue.\n",data);
    }
    else{
        que[++rear]=data;
        printf("%d is successfully Enqueued into the Queue.\n",data);
    }
}
void dequeue(){
    if(isEmpty()){
        printf("Queue Underflow.\n");
    }
    else{
        printf("%d\n",que[front++]);
    }
}
int isFull(){
    if(rear == 9)
        return 1;
    else
        return 0;
}
int isEmpty(){
    if(front == -1)
        return 1;
    else
        return 0;
}
void peek(){
    if(isEmpty()){
        printf("Queue Underflow.\n");
    }
    else{
        printf("%d\n",que[front]);
    }
}
void size(){
    if(isEmpty()){
        printf("Queue Underflow.\n");
    }
    else{
        printf("%d\n",rear-front+1);
    }
}
void display(){
    if(isEmpty()){
        printf("Queue Underflow.\n");
    }
    else{
        printf("Elements in Queue: ");
        for(int i=front;i<=rear;i++){
            printf("%d ",que[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice,data,confirm;
    do{
        printf("Menu \n1. Enqueue\n2. Dequeue\n3. isFull\n4. isEmpty\n5. Peek\n6. Size\n7. Print\n8. Exit\nEnter a Choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter the data: ");
                scanf("%d",&data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if(isFull())
                    printf("Queue Overflow.\n");
                else
                    printf("Queue is not full.\n");
                break;
            case 4:
                if(isEmpty())
                    printf("Queue Underflow.\n");
                else
                    printf("Queue is not empty.\n");
                break;
            case 5:
                peek();
                break;
            case 6:
                size();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("You choose to exit. \nEnter \n1-to confirm.\n0-to continue.\n");
                scanf("%d",&confirm);
                if(confirm==1)
                    exit(0);
                break;
            default:
                printf("Invalid input.\n");
        }
    }while(confirm!=1);
    return 0;
}
