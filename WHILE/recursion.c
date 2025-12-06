#include<stdio.h>
int sum(int n){
if(n==1){
return 1;
}
return n+sum(n-1);
}
int main(){
     int s=sum(4);
    printf("%d",s);

}