#include <stdio.h>

double e(int x, int n){

    static double p=1, f=1;
    double r;
    if(n == 0){
        return 1;
    }
    r=e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double e2(int x, int n){

   static double s;
   if(n == 0){
       return s;
   }
   s = 1+x*s/n;
   return e2(x,n-1);
}

double e3(int x, int n){

    double s = 1;
    int  i;
    double num = 1;
    double den = 1;
    for(i = 1;i < n; i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
  
}




int main(){

  printf("%lf\n",e3(4,10));






    return 0;
}