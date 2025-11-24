#include<stdio.h>
int main(){
    int i,n;
    printf("enter number ");
    scanf("%d",&n);
    i=1;
    int sum=0;
    while(i<n){
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
        printf("sum is %d",sum);
    
}