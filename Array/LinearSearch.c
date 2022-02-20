#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void swap(int *x,int *y)
 {
    int temp=*x;
    *x=*y;
    *y=temp;
 }

void Display(struct Array arr){
    int i;
    printf("\nElement are\n");
    for(i = 0; i < arr.length; i++){
        printf("%d\n",arr.A[i]);
    }
}


int ImprovedLinearSearch(struct Array *arr, int x){
  for(int i = 0; i < arr->length; i++){
      if(x == arr->A[i]){
        swap(&arr->A[i], &arr->A[i-1]);
          return i;
      }
  }
  return -1;
}

int LinearSearch(struct Array *arr, int x){
    for(int i = 0; i < arr->length; i++){
        if(x == arr->A[i]){
            return i;
        }
    }
    return -1;
}




int main(){


    struct Array arr = {{2,3,4,5,6},10,5};



    printf("%d",ImprovedLinearSearch(&arr,5));




    return 0;
}
