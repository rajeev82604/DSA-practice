#include <stdio.h> //circular ll using both head and tail
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} n;

n *head, *newnode, *temp, *tail, *nextnode; // by default global pointers are initialised to NULL and global variables are initialised to 0;
int length;

void createcll()
{
    head = 0;
    printf("ENTER THE LENGTH OF LL : ");
    scanf("%d", &length);
    for (int i = 1; i <= length; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {

            temp->next = newnode;
            temp = newnode;
        }
        newnode->next = head;
    }
    tail=newnode;
}

void display()
{
    if (head == 0)
    {
        printf("Empty");
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}

void insert_at_beg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &newnode->data);
    newnode->next=head;
    tail->next=newnode;
    head= newnode;
    length++;
}
void insert_at_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &newnode->data);
    newnode->next=head;
    tail->next=newnode;
    tail=newnode;
    length++;
}

void insert_at_pos()
{
    int pos,i;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos>length || pos<1)
    {
        printf("Invalid position");
    }
    else if (pos==1)
    {
        insert_at_beg();
    }
    else if (pos==length)
    {
        insert_at_end();
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        i=1;
        temp=head;
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    length++;
}
void delete_at_beg()
{
    length--;
}
void delete_at_end()
{
    length--;
}
void delete_at_pos()
{
    int pos,i;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos>length || pos<1)
    {
        printf("Invalid position");
    }
    else if (pos==1)
    {
        delete_at_beg();
    }
    else if (pos==length)
    {
        delete_at_end();
    }
    else
    {
        i=1;
        temp=head;
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
    length--;
}

int main()
{
    createcll();
    display();
    //printf("\n%d",tail->data);
    delete_at_pos();
    display();

}

