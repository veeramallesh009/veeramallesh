#include<stdio.h>
void sortarrayelement(int arr[], int num)
{
    int i,j;
    if(num>0)
    {
    int i,j,temp;
     for(j=0;arr[j];j++)
    {
    for(i=j+1;arr[i];i++)
    {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
}
}
int main()
{
    int num=5,i;
    int arr[num];
    printf("Enter the Array Element:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    sortarrayelement(arr,num);
    printf("After sort Array Elements are:");
    int j;
    for (j=0; j< num; j++)
     printf("%d ", arr[j]);
    return 0;
}

