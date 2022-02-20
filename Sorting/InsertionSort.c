#include <stdio.h>


void InsertionSort(int *A, int n){
    int j, x;
    for(int i = 1; i< n; i++){
    j = i-1;
    x = A[i];
    while(j > -1 && A[j] > x){
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = x;

  }



}



int main(){



     int A[] = {3,4,8,6,7,45,65,12};

        InsertionSort(A, 8);

        for(int i = 0; i< 8; i++){
            printf("%d ", A[i]);
        }
        printf("\n");




    return 0;
}
