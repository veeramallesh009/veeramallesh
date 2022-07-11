#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *a[]={"veera","mallesh", " ","anil","raju"};//Take an array with pointer with some strings
    int size=sizeof a/sizeof(a[0]);//find the size of array
    int pos=1;
    printf("%d",size);//print the size
    int i;

    for(i=0;i<5;i++){
        printf("\n");
        if(a[i]==" "){//check the condition empty string or not
            pos=pos+2;
         a[i]="cyient";//in empty string assign cyient

        }
    printf("%s ",*(a+i));//print all strings with cyient

    }
    printf("\n");
     printf("pos=%d\n",pos);//print the position of empty string
    return 0;
}
