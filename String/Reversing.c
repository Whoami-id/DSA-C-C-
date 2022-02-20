#include <stdio.h>

void Reverse(char *A, char *B){
    int i,j;
    for(i = 0; A[i] != '\0'; i++){
    }
    i-= 1;
    for(j = 0; i >= 0; i--, j++){
        B[j] = A[i];
    }
    B[j] = '\0';
    printf("%s", B);


}




int main(){

    char A[] = "Python";
    char B[7];
    Reverse(A, B);


    return 0;
}
