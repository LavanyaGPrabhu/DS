#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice;
    int v;
    int e;
    int v1,v2,w;
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
    printf("Menu\n1. Undirected Graph\n2. Directed Graph\n3. Undirected Weighted Graph\n4. Directed Weighted Graph\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        for (int i=0;i<e;i++){
            printf("Enter the vertices of edge %d: ",i+1);
            scanf("%d%d",&v1,&v2);
            graph[v1][v2]=1;
            graph[v2][v1]=1;
        }
        printf("\n\nPrinting the Adjacency Matrix: \n");
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                printf("%d\t\t",graph[i][j]);
            }
            printf("\n");
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
        printf("\n\nPrinting the Adjacency Matrix: \n");
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                printf("%d\t\t",graph[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        for (int i=0;i<e;i++){
            printf("Enter the vertices of edge %d: ",i+1);
            scanf("%d%d",&v1,&v2);
            printf("Enter the weight of edge %d: ",i+1);
            scanf("%d",&w);
            graph[v1][v2]=w;
            graph[v2][v1]=w;
        }
        printf("\n\nPrinting the Adjacency Matrix: \n");
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(graph[i][j]!=0)
                    printf("%d\t\t",graph[i][j]);
                else
                    printf("inf\t\t");
            }
            printf("\n");
        }
        break;
    case 4:
        for (int i=0;i<e;i++){
            printf("Enter the tail of edge %d: ",i+1);
            scanf("%d",&v1);
            printf("Enter the head of edge %d: ",i+1);
            scanf("%d",&v2);
            printf("Enter the weight of edge %d: ",i+1);
            scanf("%d",&w);
            graph[v1][v2]=w;
        }
        printf("\n\nPrinting the Adjacency Matrix: \n");
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(graph[i][j]!=0)
                    printf("%d\t\t",graph[i][j]);
                else
                    printf("inf\t\t");
            }
            printf("\n");
        }
        break;
    default:
        printf("Invalid Input.");
    }
    return 0;
}
