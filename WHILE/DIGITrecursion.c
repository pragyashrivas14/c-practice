#include<stdio.h>
int digitcount(int n){
    if(n==0){
        return 0;
    }
    return 1+digitcount(n/10);
}
int main(){
    int n=digitcount(9997766);
    printf("%d",n);
}