#include<stdio.h>
int power(int n,int m){
    if(m==0){
        return 1;
    }
    return n*power(n,m-1);

}
int main(){
    int P=power(3,5);
    printf("%d",P);
}