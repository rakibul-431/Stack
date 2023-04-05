#include<stdio.h>
#define capacite 4
int stack[capacite];
int top= -1;
 void push(int x)
{
    if(top<capacite-1){
            printf("Sucessfully added");
        top=top+1;
        stack[top]=x;
        printf("  %d  \n",stack[top]);
    }else
    printf("Exception no data spaces\n");
}
pop(){
    if(top>=0){
        int val=stack[top];
        top=top-1;
        return val;
        }
    else
        printf("Exception no data pop funtion ");
    return -1;
}
peek(){
    if(top>=0){
        return stack[top];
    }
    else
        printf("Exception no data peek funtion\n");
     return -1;
}
int main(){
    push(34);
    push(43);
    printf("pop item %d\n",pop());
    push(23);
    printf("Top of peek %d\n",peek());
    push(3);
    push(21);
    push(22);




}
