#include<stdio.h>
#define capacity 4
 int stack[capacity];
 top=-1;
 push(int x){
     if(top<capacity-1){
            top=top+1;
        stack[top]=x;
        printf("Successfully added item : %d\n",stack[top]);
        }
     else
        printf("Exception no data spaces from push\n");
     return -1;
 }
 pop(){
     if(top>=0){
        int val=stack[top];
        return val;
        top--;
     }
     else
        printf("Exception no data from pop\n");
     return -1;

 }
 peek(){
     if(top>=0)
        return stack[top];
     else
        printf("Exception no data from peek ");
     return -1;
  }
  int main(){
  push(34);
  push(11);
  push(15);
  printf("Do pop top item %d\n",pop());
  push(10);
  push(12);
  push(76);
  push(23);

  }
