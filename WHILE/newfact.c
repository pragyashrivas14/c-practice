#include<stdio.h>
int main(){
    int i,n,fact;
    printf("enter number you want fact");
    scanf("%d",&n);
    i=1;
    fact=1;
    do{
        fact=fact*i;
        i++;
    }
    while(i<n);
    {
        printf("fact is %u",fact);

    }
}