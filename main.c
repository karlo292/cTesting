#include<stdio.h>
#include<stdlib.h>



int main()
{

    char name[50];
    printf("Enter your full name: ");
    scanf("%[^\n]",name);
    printf(name);
    return 0;

}
