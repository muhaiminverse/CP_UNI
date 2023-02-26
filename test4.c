#include<stdio.h>

void pa()
{
    int arr2[3]= {2,3,4};
    for(int i=0; i<3; i++)
        printf("%d ",arr2[i]);

}

int main()
{
    int arr[3];

    for(int i=0; i<3; i++)
        scanf("%d ",&arr[i]);

    for(int i=0; i<3; i++)
        printf("%d ",arr[i]);

    printf("//");
    pa();
}
