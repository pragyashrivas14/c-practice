#include<stdio.h>
void min(int a,int b){
    if(a<b){
        printf("a in min%d",a);
    }else{
        printf("b is min %d",b);}  
}
int main(){
    min(11,22);
}