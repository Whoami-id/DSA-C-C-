#include <stdio.h>


int sum(int n ){
 if(n == 0){
    return 0;
  }else{
    return sum(n - 1) + n;
        }
}

int sum2(int n){
    return (n*(n + 1))/2;
}

int main(){

  int r =  sum2(5);
  printf("%d", r);




    return 0;
}