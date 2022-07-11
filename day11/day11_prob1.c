#include<stdio.h>
int binarySearch(int array[], int x, int start, int ending) {
 // Repeat the loop until low and medium meet each other
 while(start<=ending) {
 int mid=(start+ending)/2;
 if(array[mid]==x)
 return mid;
 if(array[mid]<x)
 ending=mid+1;
 else
 ending=mid-1;
 }
 return 0;
}
int main(void) {
 int array[11]={1,5,7,11,13,17,19,23,27,29,31};
 int n=sizeof(array)/sizeof(array[0]);
 int x=9;
 int result=binarySearch(array,x,0,n-1);
 if(result==0)
 printf("Not found");
else
printf("Element is found at index %d", result);
 return 0;
}
