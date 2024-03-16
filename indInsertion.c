#include <conio.h>
#include <stdio.h>

void display(int arr[],int size){
    int a;
    printf("Enter the number of elements:");
    scanf("%d",&a);
    for(int i = 0; i<a; i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    
    printf("\nThe Array is : \n");
    for(int i=0; i<a; i++){
    printf("%d  ",arr[i]);
    }
}
    void indInsertion(int arr[],int size,int element, int index){
        printf("Enter the element to be inserted:");
        scanf("%d",&element);
        printf("Enter the index at which the element is inserted:");
        scanf("%d",&index);
        
        if(index>size){
            printf("Exceeds the Size");
        }
        
        for(int i = size; i<index; i--){
            arr[i+1] = arr[i];
            arr[i] = element;
        }
    }


int main()
{
    int arr[100];
    int element;
    int index;
    int size=100;

    display(arr,size);
    indInsertion(arr,size,element,index);
    size+=1;
    display(arr,size);
    return 0;
}
