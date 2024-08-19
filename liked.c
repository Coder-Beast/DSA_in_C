
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

struct student
{
    int rno;
    struct student *next;
};
int main()
{
    struct student *head,*temp,*newnode;
    int choice;
    head = NULL;
    do{
        printf("Start\nchoice\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            newnode = (struct student *)malloc(sizeof(struct student));
            printf("Enter roll no:");
            scanf("%d",&newnode->rno);

            if(head == NULL)
            {
                head = newnode;
                newnode->next = NULL;
            }
            else {
            newnode->next = head;
            head = newnode;
            }
            printf("Done");
            break;
            case  2:

            if(head ==NULL) printf("List empty\n");
            else 
            {
                temp = head;
                head = head->next;
                printf("Deleted");
            }
            break;

            case 3:if(head ==NULL) printf("List empty\n");
            else
             {
                temp = head;
                while (temp !=NULL) {
                    printf("\t %d", temp->rno);
                    temp = temp->next;
                
                }
             }
            break;
            default:printf("Invalid");

       }

            
    }while(choice!=4);
    return 0;
}