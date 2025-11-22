#include<stdio.h>
int main(){
    int a,b;
    printf("enter number ");
    scanf("%d %d",&a,&b);
if(a>b)
{
    printf("%d is grter then %d",a,b);
}else{
    if(a=b){
        printf("%d equal to %d",a,b);
    }else{
        printf("%d is grter then %d",b,a);
    }
}
}