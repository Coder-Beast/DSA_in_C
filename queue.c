#include <stdio.h>
#include<stdlib.h>
#define MAX 3
void insert();
void delete();
void display();

int queue[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;

    while (1)
    {
        printf("\t 1.Insert\n\t 2.Delete\n");
        
        printf("\t 2.Display\n 4.quit\n Enter choice");
        scanf("%d", &choice);


        switch(choice) {

            case 1: insert();
                break;
            case 2: delete();
                break;

            case 3: display();
                break;
            case 4: exit(0);

            default:printf("\nInvalid choice");
    
    }
    }



}

void insert()
{
    int element;
    if(rear == MAX -1)
    {
        printf("\n Stack Overflow");

    }

    else {
        if(front == -1) front = 0;
        printf("Enter the element: ");
        scanf("%d", &element);
        rear++;
        queue[rear] = element;
    }
}

void delete()
{
    if(front == -1|| front > rear){
        printf("Queue Underflow");
    }

    else {
    printf("\t Element deleted from queue is: %d", queue[front]);
    front++;
    }
}

void display()
{
    int i;
    if(front == -1 || front> rear) printf("Queue is empty");

    else
    {
            printf("Elements in the queue");
        for(i =front; i<=rear; i++)
        {
            if(i == front)
                    printf("\nfront %d",queue[i]);
            
            else if(i == rear) printf("\n rear %d", queue[i]);
            else
            printf("\n%d",queue[i]);

        }
    }
    printf("\n");
     
}




void insert1()
{
    int element;

    if(rear == MAX -1) printf("Stack overflow");
    else{

        if(front == -1) front =0;
        printf("enter the element: ");
        scanf("%d", &element);

        rear++;
    queue[rear] = element;
    }

    
}


