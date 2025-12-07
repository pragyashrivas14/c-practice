#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
int count=0;
int i;
    gets(str1);
    for( i=0;str1[i]!='\0';i++){
        count++;
    }
    printf("%d",count);

}