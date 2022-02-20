#include <stdio.h>
#define SIZE 10


int has(int key){
    return key % SIZE;
}

int probe(int H[], int key){
    int index = has(key);
    int i = 0;
    while(H[(index +1)%SIZE] != 0){
        i++;
    }
  return  ((index + 1)%SIZE);
}

void insert(int H[], int key){
    int index = has(key);
    if(H[index] != 0){
        index = probe(H, key);
    }
    H[index] = key;

}


int search(int H[], int key){
    int index = has(key);
    int i = 0;
    while(H[(index + 1)&SIZE] != key){
        i++;
    }
    return (index +1)%SIZE;
}

int main(){

    int HT[10] = {0};

    insert(HT, 12);
    insert(HT, 25);
    insert(HT, 35);
    insert(HT, 26);

    printf("%d ", search(HT,35));







    return 0;
}
