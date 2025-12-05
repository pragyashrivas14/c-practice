#include<stdio.h>
void sumfrom1ton(int n){
     int sum=0;
    for(int i=1;i<n;i++){
 sum=sum+i;
    }
 printf("sum is%d",sum);
    
}
int main(){
    sumfrom1ton(10);
}