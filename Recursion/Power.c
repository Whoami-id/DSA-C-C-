#include <stdio.h>


int power(int m, int n){
    if(n == 0){
        return 1;
    }else{
        return power(m,n-1)*m;
    }
}

int power2(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n%2 == 0){
        return power2(m*m,n /2);
    }
    return m * power2(m*m,(n-1)/2);
}







int main(){


int r = power2(2,5);
printf("%d", r);




    return 0;
}