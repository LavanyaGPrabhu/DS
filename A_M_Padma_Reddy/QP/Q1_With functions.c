/*
Design, Develop and Implement a menu driven Program in C for the following Array operations
a. Creating an Array of n Integer elements.
b. Display of Array Elements with suitable Headings.
c. Inserting an Element (elem) at a given valid Position (pos).
d. Deleting an Element at a given valid Position (pos).
e. Exit.
Support the program with functions for each of the above operations.
*/
#include <stdio.h>
#include <stdlib.h>
int insert(int arr[],int flag[],int n){
    int elem;
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    pos--;
    if(pos>=n)
        printf("The position entered is not valid.");
    else if(flag[pos]==1)
        printf("Element is already entered in position %d",pos+1);
    else{
        printf("Enter the element to be inserted: ");
        scanf("%d",&elem);
        arr[pos]=elem;
        flag[pos]=1;
    }
    return *arr;
}
int del(int arr[],int flag[],int n){
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    pos--;
    if(pos>=n)
        printf("The position entered is not valid.");
    else if(flag[pos]==0)
        printf("No element is entered in position %d",pos+1);
    else{
        printf("Element at position %d: %d",pos,arr[pos]);
        flag[pos]=0;
    }
    return *arr;
}
void disp(int arr[],int flag[],int n){
    for(int i=0;i<n;i++){
        if(flag[i]==1)
            printf("Element at position %d:\t%d\n",i+1,arr[i]);
        else
            printf("No element entered\n");
    }
}
int main(){
    int n;
    char name[10];
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    printf("Enter the name of the array: ");
    gets(name);
    gets(name);
    //scanf("%[^\n]",name);
    int arr[n];
    int flag[n];
    for(int i=0;i<n;i++)
        flag[i]=0;
    int choice;
    do{
        printf("\nEnter \n1. to enter an element at a valid position.\n2. to delete an element at a valid position.\n3. to display the array.\n4. to exit.\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            arr[0]=insert(arr,flag,n);
            break;
        case 2:
            arr[0]=del(arr,flag,n);
            break;
        case 3:
            printf("Displaying the elements of array %s\n",name);
            disp(arr,flag,n);
            break;
        case 4:
            printf("Exitting!!");
            exit(0);
        default:
            printf("Enter appropriate input");
        }
    }while(choice!=4);
    return 0;
}
