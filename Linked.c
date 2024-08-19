
#include <stdio.h>
#include <stdlib.h>



struct student
{
    int rno;
    struct student *next;
};
void Insertion(struct student** head)
{
    struct student*newnode =(struct student *) malloc(sizeof(struct student));
    printf("Enter Roll No: ");
    scanf("%d", &newnode->rno);

    if(*head == NULL)
    {
        *head = newnode;
        newnode->next = NULL;
    }
    else {
        newnode->next =*head;
        *head = newnode;
    }
    printf("%d is inserted at the beginning\n\n", newnode->rno);

}
void deletion(struct student**head)
{
    struct student *temp;
    if(*head == NULL){
        printf("Linked list is empty\n");
        return;
    } 
    temp = *head;
    *head = (*head)->next;
    printf("%d is deleted at the beginning\n\n", temp-> rno);
    free(temp);
    
}
void display(struct student ** head)
{
    if (*head == NULL) {
        printf("Linked list is empty\n");
        return;
    }
    struct student *temp = *head;
    printf("Contents of the list:\n");
    while (temp != NULL) {
        printf("\n %d\n", temp->rno);
        temp= temp->next;
    }
}

int main()
{
    struct student *head;
    int choice;
    head = NULL;


    do {
     printf("1. Insert Beginning\n2.Delete Beginning\n3.Display\n4.Exit\n Enter yur choice: ");
     scanf("%d", &choice);

     switch (choice) {
     case 1: Insertion(&head);
            break;
     case 2: deletion(&head);
            break;
     case 3: display(&head);
            break;
     case 4: printf("Exiting the linked list");
            break;
     default: printf("Invalid");
     }

    }while (choice != 4);
    return  0;
}

/* if(head == null)
    printf("Empty")
    else
        temp = head;
        while(temp!= null)
        {
            printf("\t%d",temp->roll no);
            temp = temp->next;
        }*/