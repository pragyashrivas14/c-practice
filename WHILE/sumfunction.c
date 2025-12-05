#include<stdio.h>
void sum(int a,int b){
    int sum;
    sum=a+b;
    printf("sum is%d",sum);
    return ;
}
int main(){
    sum(5,9);
}