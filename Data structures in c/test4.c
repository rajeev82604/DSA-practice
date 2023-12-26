#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;

void create_ll()
{
    int choice = 1; // Initialize choice to a non-zero value to enter the loop
    head = NULL; // Set head to NULL initially

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL; // Set the next pointer to NULL

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? (0/1): ");
        scanf("%d", &choice);
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
}

int main()
{
    create_ll();
    return 0;
}
