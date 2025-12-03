#include<stdio.h>
int main(){
    int n,i;
    printf("enter number from you want");
    scanf("%d",&n);
    for(i=2;i<n;i+=2){
        printf("%d",i);
    }
}