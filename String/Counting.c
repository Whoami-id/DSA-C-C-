#include <stdio.h>


void NumberOfWords(char *A){
    int word = 1;
    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] == ' ' && A[i -1] != ' '){
            word++;
        }
    }
    printf("%d", word);
}




int main(){

    char A[] = "How are you";
    NumberOfWords(A);






    return 0;
}