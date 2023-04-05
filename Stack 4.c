#include<stdio.h>
#define capacity 5
 int stack[capacity];
 int top =-1;
void push(int x ){
     if(top<capacity){
        top=top+1;
        stack[top]=x;
        printf("stack %d valu %d\n ",top+1,stack[top]);
     }
     else
     {
        printf("no exception!! stack is full\n");
        return -1;
     }
}
pop(){
    if(top>=0){
        int val=stack[top];
        top=top-1;
        return val;
        }
    else
    {
        printf("no exception!! stack is empty \n");
        return -1;
    }

}
peek(){
    if(top>=0){
        return stack[top];

    }
    else
    {
        printf("no exception !! stack is empty\n");
        return -1;
    }

}
int main()
{
push(34);
push(56);
push(10);
printf("pop value %d\n",pop());
push(23);
push(10);
push(27);
push(34);
}
