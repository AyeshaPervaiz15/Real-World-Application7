#include <stdio.h>

int main() {
      // c program to print the table  from 1-10 of any number  using do while loop
    int  i=1,number=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    do{
        printf("%d \n",(number*i));
        i++;
    }while(i<=10);
    return 0;
}
