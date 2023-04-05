#include<stdio.h>
#define capacity 3
int stack[capacity];
top =-1;
push(int x){
    if(top<capacity-1){
        top=top+1;
        stack[top]=x;
        printf("Sucessfully added item:%d\n",stack[top]);

        }
        else
            printf("Exception no data spaces\n");
}

        pop(){
            if(top>=0){
                int val=stack[top];
                top=top-1;
                return val;
            }
            else
                printf("Exaception no data from pop\n");
            return -1;
        }
        peek(){
            if(top>=0){
                return stack[top];
            }
            else
                printf("No data spaces from peek \n");
        return -1;
        }
        int main(){
            push(34);
            push(33);
            push(21);
            printf("pop of top item:%d\n",pop());
            push(12);
            printf("peek of top item:%d\n",peek());
            push(11);

  return 0;
        }


