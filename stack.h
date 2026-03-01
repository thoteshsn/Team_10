#include<stdio.h>
#include<stdlib.h>
#define size 2
int a[size],top=-1,ele,i;
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("Enter a choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:exit(0);
        }
    }
}
void push()
{

    if(size-1==top)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter a number\n");
        scanf("%d",&ele);
        top++;
        a[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty,nothing to pop\n");
    }
    else
    {
        printf("popped element %d",a[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }


}
