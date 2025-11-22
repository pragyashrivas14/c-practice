#include<stdio.h>
int main(){
    int n;
    int a,b,ch;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
        printf("enter 1 for addition \nenter 2 for substraction \n enter 3 for mul\n enter 4 for div\n");

        printf("enter choice ");
    scanf("%d",&ch);
    if(ch==1){
        printf("addition is %d",a+b);
    }
    if(ch==2){
            printf("addition is %d",a-b);
    }
    if(ch==3){
        printf("sub is %d",a*b);  
    }
    if(ch==4){
        printf("div is %d",a/b);
    }
}