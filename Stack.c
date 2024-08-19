#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3

int stack[MAXSIZE];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("\n\n\t Stack Operations");
        printf("\n 1.Push\n2.Pop\n3.Display\n4.EXIT\n Choice: ");
        scanf("%d",&ch);

        switch (ch) {
        case 1: push();break;
        case 2: pop();break;
        case 3: display();break;
        case 4:exit(0);

        default: printf("Invalid CHoice");
        }

    }
    return 0;
}

void push()
{
    int element;
    if(top == MAXSIZE-1)
    {
        printf("\n Stack full");
    }
    else {
    top++;
    printf("Enter the element\n");
    scanf("%d",&element);
    stack[top] = element;
    }

}

void pop()
{
    
    if(top ==-1)
    {
        printf("\n Stack underflow");
    }
    else {
    
    printf("Deleted elemet %d ", stack[top]);
    top--;
    }

}

void display()
{
    int i;
    if(top == -1) printf("Stack Empty");
    else
     {
        printf("Current Stack Elements:\n");
        for(i = top;i>=0;i--) printf("%d\n", stack[i]);
     }
}