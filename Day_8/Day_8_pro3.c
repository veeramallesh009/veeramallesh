#include<stdio.h>
int main()
{
	int *arr, n;
	// enter the array size
	printf("enter size :");
	// read the array size
	scanf("%d", &n);
	//enter array elements
	printf("Input %d elements of an array\n", n);
	for (int i = 0; i < n; i++)
	{
	    // read array elements
		scanf("%d", arr+i);
	}
	
	int temp;
	
	//sorting
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			
			if(*(arr + j) < *(arr + i))
			{
				temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("element - %d : %d \n", i, *(arr+i));
	}
}
