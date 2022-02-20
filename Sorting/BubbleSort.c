#include <stdio.h>


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int *A, int n){

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(A[j] > A[j+1]){
                swap(&A[j], &A[j+1]);
            }
        }
    }
}


int main(){



 int A[] = {3,4,8,6,7,45,65,12};

 BubbleSort(A, 8);

 for(int i = 0; i< 8; i++){
     printf("%d ", A[i]);
 }
 printf("\n");




    return 0;
}