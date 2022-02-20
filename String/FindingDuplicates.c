#include <stdio.h>


void HashMethod(char *A, int *B){
    int i;
    for(i = 0; A[i] != '\0'; i++){
        B[A[i] - 97] +=  1;
    }
    for(i = 0; i < 26; i++){
        if(B[i] > 1){
            printf("%c\n", i+97);
            printf("%d\n", B[i]);
        }
    }

}


void BitwiseOperations(char *A){
    int H = 0, x = 0;
    for(int i = 0; A[i] != '\0'; i++){
        x = 1;
        x = x <<(A[i] -97);
        if((x & H) > 0){
            printf("%c\n", A[i]);
        }else{
            H = x | H;
        }
    }

}



int main(){

    char A[] = "finding";
    int B[26] = {0};

    BitwiseOperations(A);
    return 0;
}
