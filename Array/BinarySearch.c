#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};




int BinarySearch(struct Array arr, int key){
    int l, mid, h;
    l = 0;
    h = arr.length-1;

    while(l <= h){
        mid = (l + h) / 2;
        if(key == arr.A[mid]){
            return mid;
        }else if(key < arr.A[mid]){
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return -1;

}


int RBinarySearch(struct Array arr, int l, int h, int key){
    if(l <= h){
       int mid = (l + h) / 2;
        if(key == arr.A[mid]){
            return mid;
        }else if(key < arr.A[mid]){
            return RBinarySearch(arr, l, mid -1, key);
        }else{
            return RBinarySearch(arr, mid+1, h, key);
        }
    }
    return -1;
}


int main(){


    struct Array arr = {{2,3,4,5,6},10,5};

    printf("%d\n", RBinarySearch(arr,0,arr.length, 2));



    return 0;
}
