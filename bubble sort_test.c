#include<stdio.h>

void bubbleSort(int arr[],int len)
{
    arr[len];
    int s;
    for(s=0; s < len-1; s++)
    {
        //int i;
        for(int i=0; i < len-s-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;

            }
        }
    }
}

void printArray(int arr[], int len)
{
    int j;
    for(j=0; j<len; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {-25, -2, 1, 22, 4, 55};
    int len= sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,len);

    printf("Sorted Arrays in ascending order:\n");
    printArray(arr, len);
}
