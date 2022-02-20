#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void SelectionSort(int *A, int n){

    int i , j, k;
    for(i = 0 ; i < n -1; i++){
        for(j = k = i; j < n; j++){
            if(A[j] < A[k]){
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}


int main(){



 int A[] = {3,4,8,6,7,45,65,12};

 SelectionSort(A, 8);

 for(int i = 0; i< 8; i++){
     printf("%d ", A[i]);
 }
 printf("\n");




    return 0;
}
