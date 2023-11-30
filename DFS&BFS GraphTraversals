#include<stdio.h>
#include<stdlib.h>
int v;
void BFS(int arr[v][v],int n){
    int visited[v];
    int que[v];
    int rear=-1;
    int front=-1;
    //int flag;
    for(int i=0;i<v;i++){
        visited[i]=0;
    }
    visited[n]=1;
    que[++rear]=n;
    front++;
    printf("BFS for node %d: ",n);
    while(front<=rear){
        for(int i=0;i<v;i++){
            if(arr[que[front]][i]==1&&visited[i]==0){
                que[++rear]=i;
                visited[i]=1;
            }
        }
        printf("%d ",que[front++]);
    }
    printf("\n");
}
DFS(int arr[][v],int n){
    int visited[v];
    int stk[v];
    int top=-1;
    for(int i=0;i<v;i++){
        visited[i]=0;
    }
    visited[n]=1;
    printf("DFS for node %d: %d ",n,n);
    int key=n;
    do{
        for(int i=0;i<v;i++){
            if(arr[key][i]==1&&visited[i]==0){
                stk[++top]=i;
                visited[i]=1;
            }
        }
        if(top!=-1)
            printf("%d ",stk[top]);
        key=stk[top--];
    }while(top>=-1);
    printf("\n");
}
int main(){
    int choice;
    int e;
    int v1;
    int v2;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    printf("Enter the number of edges: ");
    scanf("%d",&e);
    int graph[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            graph[i][j]=0;
        }
    }
    printf("Menu\n1. Undirected Graph\n2. Directed Graph\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        for (int i=0;i<e;i++){
            printf("Enter the vertices of edge %d: ",i+1);
            scanf("%d%d",&v1,&v2);
            graph[v1][v2]=1;
            graph[v2][v1]=1;
        }
        break;
    case 2:
        for (int i=0;i<e;i++){
            printf("Enter the tail of edge %d: ",i+1);
            scanf("%d",&v1);
            printf("Enter the head of edge %d: ",i+1);
            scanf("%d",&v2);
            graph[v1][v2]=1;
        }
        break;
    default:
        printf("Invalid Input.");
    }
    printf("\n\nPrinting the Adjacency Matrix: \n");
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            printf("%d\t\t",graph[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<v;i++){
        BFS(graph,i);
    }
    for (int i=0;i<v;i++){
        DFS(graph,i);
    }
    return 0;
}
