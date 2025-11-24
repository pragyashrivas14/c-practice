#include<stdio.h>
int main(){
    int  i,n;
     int sum=0;
     i=1;
    printf("enter number ");
    scanf("%d",&n);
    while(i<2*n-1){
        printf("%d\n",i);
        sum=sum+i;
        i=i+2;
    }
    printf("%d\n",sum);
    
}