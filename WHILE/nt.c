#include<stdio.h>
int main(){
    int i,n;
    printf("enter number ");
    scanf("%d",&n);
    i=1;
     while(i<10){
        printf("%d\n",n*i);
        i++;
     }
}