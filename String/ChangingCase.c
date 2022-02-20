#include <stdio.h>


void ChangingCases(char *A){
    for(int i = 0; A[i] != '\0'; i++){
        A[i] += 32;
    }
    printf("%s\n", A);
}

void Toggle(char *A){
    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] >= 65 && A[i] <= 90){
            A[i] += 32;
        }else if(A[i] >= 'a' && A[i] <= 122){
            A[i] -= 32;
        }
    }
    printf("%s", A);
}



int main(){

    char A[] = "WELCOME";
    ChangingCases(A);
    char B[] = "WeLcOMe";
    Toggle(B);






    return 0;
}
