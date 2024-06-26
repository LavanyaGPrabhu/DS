#include<stdio.h>
#include<stdlib.h>
struct list{
    int adjnode;
    struct list* next;
};
struct list_weighted{
    int adjnode;
    int weight;
    struct list_weighted* next;
};
struct list* insert(int n,struct list* arr){
    struct list* newNode=(struct list*)malloc(sizeof(struct list));
    newNode->adjnode=n;
    newNode->next=NULL;
    if(arr==NULL){
        arr=newNode;
        return arr;
    }
    struct list* temp=arr;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return arr;
}
struct list_weighted* insert_weighted(int n,int w,struct list_weighted* arr){
    struct list_weighted* newNode=(struct list_weighted*)malloc(sizeof(struct list_weighted));
    newNode->adjnode=n;
    newNode->weight=w;
    newNode->next=NULL;
    if(arr==NULL){
        arr=newNode;
        return arr;
    }
    struct list_weighted* temp=arr;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return arr;
}
int main(){
    int choice;
    int v;
    int a;
    int n;
    int w;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    struct list* arr[v];
    for(int i=0;i<v;i++){
        arr[i]=NULL;
    }
    struct list_weighted* arr1[v];
    for(int i=0;i<v;i++){
        arr1[i]=NULL;
    }
    printf("Menu\n1. Un-weighted Graph\n2. Weighted Graph\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        for (int i=0;i<v;i++){
            printf("Enter the number of nodes adjacent to Node %d: ",i);
            scanf("%d",&a);
            for(int j=0;j<a;j++){
                printf("Enter the %dth node: ",j+1);
                scanf("%d",&n);
                arr[i]=insert(n,arr[i]);
            }
        }
        struct list* current;
        printf("\n\nPrinting the Adjacency List: \n");
        for(int i=0;i<v;i++){
            current=arr[i];
            printf("Nodes adjacent to Node %d: ",i);
            while(current!=NULL){
                printf("%d->",current->adjnode);
                current=current->next;
            }
            printf("NULL\n");
        }
        break;
    case 2:
        for (int i=0;i<v;i++){
            printf("Enter the number of nodes adjacent to Node %d: ",i);
            scanf("%d",&a);
            for(int j=0;j<a;j++){
                printf("Enter the %dth node: ",j+1);
                scanf("%d",&n);
                printf("Enter the weight of the edge: ");
                scanf("%d",&w);
                arr1[i]=insert_weighted(n,w,arr1[i]);
            }
        }
        struct list_weighted* curr;
        printf("\n\nPrinting the Adjacency List: \n");
        for(int i=0;i<v;i++){
            curr=arr1[i];
            printf("Nodes adjacent to Node %d: ",i);
            while(curr!=NULL){
                printf("%d,%d->",curr->adjnode,curr->weight);
                curr=curr->next;
            }
            printf("NULL\n");
        }
        break;
    default:
        printf("Invalid Input.");
    }
    return 0;
}
