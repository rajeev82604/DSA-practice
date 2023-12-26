#include <stdio.h> //we have to write code for insert/delete at front and end because it is at these positions, insert/delete at pos fails 
#include <stdlib.h> // Imp note: The called function must be declared above the calling function
typedef struct node
{
    int data;
    struct node *next, *prev;
} n;
int size;
n *head, *temp, *newnode,*tail;

void create_dll()
{
    head = 0;
    printf(" ENTER THE SIZE OF THE LL : ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        newnode = (n *)malloc(sizeof(n));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = newnode->prev = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode; // because temp has the adress of the previous node
            newnode->prev = temp;
            temp = newnode;
        }
    }
    tail=newnode;
}
void display()
{
    printf("\n");
    if (head == 0)
    {
        printf("Empty");
    }
    else
    {
        temp = head;
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

void delete_at_beg()
{
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
    size--;
}
void delete_at_end()
{   
    temp=tail;
    tail=tail->prev;
    tail->next=0;
    size--;
}
void delete_at_pos()
{
    int pos;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos < 1 || pos > size)
    {
        printf("invalid position");
    }
    else if (pos == 1)
    {
        delete_at_beg();
    }
    else if (pos == size)
    {
        delete_at_end();
    }

    else
    {
        temp = head;
        int i = 1;
        while (i != pos)
        {
            temp = temp->next;
            i++;
        }
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
    }
    size--;
}
void reverse_print()
{
    printf("\n");
    temp=tail;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->prev;
    }
}
void insert_at_beg()
{
    newnode = (n *)malloc(sizeof(n));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    newnode->prev=0;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    size++;
}
void insert_at_end()
{
    newnode = (n *)malloc(sizeof(n));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    newnode->next=0;
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
    size++;
}
void insert_at_pos()
{
    int pos,i=1;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos>size)
    {
        printf("Invalid position");
    }
    else if (pos==1)
    {
        insert_at_beg();
    }
    else if (pos==size)
    {
        insert_at_end();
    }
    
    else 
    {
        newnode = (n *)malloc(sizeof(n));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next->prev=newnode;
        temp->next=newnode;
    }
    size++;
    
}
int main()
{

    create_dll();
    display();
    insert_at_pos();
    display();
    delete_at_pos();
    display();
}