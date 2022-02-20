#include <stdio.h>

int fact(int n ){

    if(n < 1){
        return 1;
    }else{
        return fact(n - 1) *n;
    }



}



int main(){



    int r = fact(5);
    printf("%d", r);





    return 0;
}
