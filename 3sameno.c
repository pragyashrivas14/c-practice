#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value of ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b){
        if(a>c){
            printf("a is grater %d",a);
        }
        else{
            printf("c is greater %d",c);
        }
    }
    else if(b>c){
        printf("b is greater %d",b);
    }
    else{
        printf("c is greater %d",c);
    }
}