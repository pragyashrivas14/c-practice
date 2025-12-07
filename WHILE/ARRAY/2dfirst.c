
#include<stdio.h>
int main(){
    int matrix[2][3]={{1,2,3},{4,5,6}};
    int row;
    int coloum;
    for(row=0;row<2;row++){
        for(coloum=0;coloum<3;coloum++){
    
    printf("matrix element is [%d],[%d] as following %d \n ",row,coloum,matrix[row][coloum]);
    //scanf("%d %d",&matrix[row][coloum]);
        }
}
    
}