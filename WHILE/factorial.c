#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter factorialnumber");
    scanf("%d\n",&n);
    i=1;
    while(i<n){
        fact=fact*i;
        i++;
    }
    printf("%d",n,fact);
}