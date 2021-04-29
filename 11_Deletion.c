#include<stdio.h>

void display(int arr[], int n)
{
    //code for traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indexDeletion(int arr[], int size, int index)
{
    //code for Deletion
    for(int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
  
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    display(arr, size);
    indexDeletion(arr, size, index);
    size -=1 ;
    display(arr, size);
}