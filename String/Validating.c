#include <stdio.h>


int IsValid(char *A){
    for(int i = 0; A[i] != '\0'; i++){
        if(!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122) && !(A[i] >= 48 && A[i] <= 57)){
            return 0;
        }
        
    }
    return 1;

    
}




int main(){

    char A[] = "Test?123";
    printf("%d", IsValid(A));
   

    return 0;
}