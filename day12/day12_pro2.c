#include<stdio.h>
int main()
{
 int a1[] = { 1, 5, 10,20, 30, 40, 80 };//Declare a array1 and assign some values
int a2[] = { 5, 6, 10, 30, 80 };//Declare a array and assign2 some values
 int a3[] = { 3, 6, 10, 20, 30, 70, 80, 120 };//Declare a array3 and assign some values
 int n1 = sizeof(a1) / sizeof(a1[0]);//find the size of array1
 int n2 = sizeof(a2) / sizeof(a2[0]);//find the size of array2
 int n3 = sizeof(a3) / sizeof(a3[0]);//find the size of array3
 int i = 0, j = 0, k = 0;
 while (i < n1 && j < n2 && k < n3) {
 if (a1[i] == a2[j] && a2[j] == a3[k]) {//check the condition in three arrays values are equal or not
     
printf("%d ", a1[i]);//print the common values in three arrays

 i++;
 j++;
 k++;
 }
 else if (a1[i] < a2[j])//check the array1 value is graterthan array2 value
i++;
 else if (a2[j] < a3[k])//check the array2 value is garater than array3 value
j++;
 else
k++;
 }
printf("Common Elements are ");

 return 0;
}
