#include<stdio.h>
#include<stdlib.h>
#define size 3
int a[size],top=-1;
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("1.push\n2.pop\n3.Display\n4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:exit(0);
            default:printf("Enter valid choice\n");
        }
    }
    return 0;

}
void push()
{
    int element;
    if(top==size-1)
    {
        printf("Stack is full,leads over flow\n");
    }
    else
    {
        printf("Enter the number of stack:");
        scanf("%d",&element);
        top++;
        a[top] = element;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("No stack,leads to unnderflow\n");
    }
    else
    {
        printf("poped element is :%d\n",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("No stack,leads to unnderflow\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("Display element is %d\n",a[top]);
}
