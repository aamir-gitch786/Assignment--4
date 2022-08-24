/******************************************************************************
6. Write a program to print the first 10 even natural numbers
*******************************************************************************/

#include <stdio.h>

int main()
{ int i=2;
    do
{ if(i%2==0)
    printf("%d\n",i);
    i++;
}while(i<=20);
    return 0;
}

