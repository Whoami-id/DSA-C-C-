#include <stdio.h>
#include <stdlib.h>

struct Stack{
  int size;
  int top;
  int *s;
};


void Create(struct Stack *st){
  printf("Enter size of Stack");
  scanf("%d", &st->size);
  st->top = -1;
  st->s = (int *)malloc(st->size * sizeof(int));
}

void Display(struct Stack st){
  for(int i = st.top; i >= 0; i--){
    printf("%d ",st.s[i]);
  }
  printf("\n");
}

void Push(struct Stack *st, int x){
  if(st->top == st->size -1){
    printf("Stack Overflow\n");
  }else{
    st->top++;
    st->s[st->top] = x;
  }
}

int Pop(struct Stack *st){
  int x = -1;
  if(st->top == -1){
    printf("Stack Underflow\n");
  }else{
    x = st->s[st->top--];
  }
  return x;
}

int Peek(struct Stack st, int index){
  int x = -1;
  if(st.top - index + 1 < 0){
    printf("Invalid Index\n");
  }
    x = st.s[st.top - index +1];
   return x;
}

int IsEmpty(struct Stack st){
  if(st.top == -1){
    return 1;
  }
  return 0;
}


int StackTop(struct Stack st){
  if(!IsEmpty(st)){
    return st.s[st.top];
  }
  return -1;
}

int IsFull(struct Stack st){
  return st.top == st.size -1;
}


int main(){

 struct Stack st;
 Create(&st);

 Push(&st, 10);
 Push(&st, 20);
 Push(&st, 30);

 printf("%d\n", Peek(st, 2));



 Display(st);





  return 0;
}
