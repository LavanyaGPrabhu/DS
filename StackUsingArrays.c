#include <stdio.h>
#include <stdlib.h>
int top=-1;
int stk[10];
void push(int data){
    if(isFull()){
        printf("Stack Overflow.\n");
    }
    else{
        stk[++top]=data;
        printf("%d is successfully Pushed into the Stack.\n",data);
    }
}
void pop(){
    if(isEmpty()){
        printf("Stack Underflow.\n");
    }
    else{
        printf("%d\n",stk[top--]);
    }
}
int isFull(){
    if(top == 9)
        return 1;
    else
        return 0;
}
int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}
void peek(){
    if(isEmpty()){
        printf("Stack Underflow.\n");
    }
    else{
        printf("%d\n",stk[top]);
    }
}
void size(){
    if(isEmpty()){
        printf("Stack Underflow.\n");
    }
    else{
        printf("%d\n",top+1);
    }
}
void display(){
    if(isEmpty()){
        printf("Stack Underflow.\n");
    }
    else{
        printf("Elements in stack: ");
        for (int i=0;i<=top;i++){
            printf("%d ",stk[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice,data,confirm;
    do{
        printf("Menu \n1. Push\n2. Pop\n3. isFull\n4. isEmpty\n5. Peek\n6. Size\n7. Print\n8. Exit\nEnter a Choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter the data: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                if(isFull())
                    printf("Stack Overflow.\n");
                else
                    printf("Stack is not full.\n");
                break;
            case 4:
                if(isEmpty())
                    printf("Stack Underflow.\n");
                else
                    printf("Stack is not empty.\n");
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
