#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int *);
void pop(int *);
void traverse(int *);
int top=-1;
int capacity;
void push(int * stack)
{
    int item;
    if(top==capacity-1)
    {
        printf("Stack Overflow");
    }
     else
     {
         printf("Enter Item");
         scanf("%d",&item);
         top++;
         stack[top]=item;
     }
     printf("Stack Successfully Pushed");
}
void pop(int * stack)
{
    int item;
    if(top==-1)
    {
        printf("Stack Underflow");
    }
     else
        {
             item=stack[top];
             top--;
        }
         printf("Stack Successfully Popped");
}
void traverse(int * stack)
{
    int i;
    if(top==-1)
    {
        printf("Stack Is Empty");
    }
     else
        {
             printf("The Stack Elements Are\n");
             for(i=0;i<=top;i++)
             {
                 printf("%d\t",stack[i]);
             }
        }
}
void main()
{
    int *stack,choice;
     printf("Enter Capacity Of Stack\n");
     scanf("%d",&capacity);
     stack=(int *)malloc(sizeof(int)*capacity);
     while(1)
     {
             system("cls");
         printf("Press The Button\n1.Push\n2.Pop\n3.Traverse4.Exit\nEnter Your Choice");
         scanf("%d",&choice);
         switch(choice)
         {
         case 1:
            push(stack);
            break;
         case 2:
            pop(stack);
            break;
         case 3:
            traverse(stack);
            break;
         case 4:
            exit(0);
            break;
         default:
            printf("Invalid Choice!");
         }
     }
     getch();
}
