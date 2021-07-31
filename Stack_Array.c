#include<stdio.h>
#include<stdlib.h>
#define MAX 4


int arr[MAX];
int top=-1;
int num;

void push();
void pop();
void display();
    
int main()
{
    int ch;
    while(1)
    {
        printf("\n1.Push\n2.POP\n3.display");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default :
            printf("Invalid choice...");
            break;
        }
    }
  
 return 0;
}
void push()
{
    
    if(top==MAX-1)
    {
        printf("\nStack overflow flow...");
        return;
    }
    else
    {
        printf("\nEnter data: ");
        scanf("%d",&num);
        top++;
        arr[top]=num; 
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow..");
        return;
    }
    else
    {
        top--;
    }
}

void display()
{
    if(top==-1)
    {
        printf("\nStack underflow..");
        return;
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d \n",arr[i]);
        }
    }
}