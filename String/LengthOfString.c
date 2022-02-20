#include <stdio.h>


void Length(char *s){
    int i;
    for(i = 0; s[i] != '\0'; i++){
    }
    printf("Lenght is%d : ", i);
}

int main(){

    char s[] = "Welcome";
    Length(s);


    return 0;
}
