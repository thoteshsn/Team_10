#include<stdio.h>
#include<stdlib.h>
#define size 3
int a[size],f=-1,r=-1;
void insert();
void _delete();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("1.insert\n2._delete\n3.display\n4.Exit\n");
        printf("Enter the number:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();break;
            case 2:_delete();break;
            case 3:display();break;
            case 4:exit(0);break;
        }

    }
}
void insert()
{
    int element;
    if(r==size-1)
    {
        printf("Queue is full ,leads to over flow\n");
        return ;
    }
    else
    {
        printf("Enter the element");
        scanf("%d",&element);
        r++;
        a[r]=element;
        if(f==-1)
        f++;
    }

}
void _delete()
{
    int element;

    if(f==-1)
    {
        printf("Queue is full,leads to underflow");
        return;
    }
    else if(f==r)
    {
       element = a[f];

        f=r=-1;

    }
    else
    {
      element = a[f];
        f++;
    }
    printf("delete element is %d\n",element);
}
void display()
{
    int i;
    if(f == -1)
    {
        printf("Queue is full,leads to underflow");
        return;
    }
    else
        for(i=f;i<=r;i++)
    {
        printf("%d\t",a[i]);
    }
}


