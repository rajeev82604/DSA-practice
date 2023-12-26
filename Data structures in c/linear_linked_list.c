#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}n;

struct node *head,*newnode,*temp; //by default global pointers are initialised to NULL and global variables are initialised to 0;
int length;

void createll()
{
    //head=0;
    int choice=1;
    while (choice)
    {
        //creating a new node and entering its data. Then initialising link to be 0/NULL
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;  //we treate each new node as the last node
        if (head==NULL)
        {
            head=temp=newnode;
            length++;
        }
        else  //temp always stores the address of the previous node. And we change the address part of previous node with the help of temp
        {
            temp->next=newnode; //set the link of previous node to the address of newly created node
            temp=temp->next;    //now point the temp to the new node
            length++;
        }
        printf("Do you want to continue ? (0/1) : ");
        scanf("%d",&choice);
    }
    printf("\n");
}

void display()
{
    temp=head;
    while (temp!=NULL) //this loop will cross the last node and stop when it will store NULL
    {
        printf("%d",temp->data);
        temp=temp->next;
    } 
    printf( "\n");
}

void insert_front()
{
    newnode=(n*)malloc(sizeof(n));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=head; //head contains the address of 1st node, so store the address of 1st node in link part of newnode
    head=newnode;   //then point head to the new node
    printf("\n");
}

void insert_end()
{
    newnode=(n*)malloc(sizeof(n));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;  
    temp= head; 
    while (temp->next!=NULL) //this loop will stop at the last node and will stop when temp will store address of lastnode
    {
        temp=temp->next;
    }
    temp->next=newnode;

}

void insert_at_a_location()
{
    int pos; int i=1;
    printf("Enter the position : ");
    scanf("%d",&pos);    
    if (pos>length)
    {
        printf("Invalid position");
    }
    else
    {
        newnode=(n*)malloc(sizeof(n));
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        temp=head;
        while (i<pos)   //this loop will stop at pos ans it will not cross it
        {
            temp=temp->next;
            i++;
        }               //now at the end of the loop, temp contains the address of node which is at the given position
        
        newnode->next=temp->next; //temp->next contains the address of next node, so store it in the link part of newnode
        temp->next=newnode;       //store the address of newnode in the link part of current node
    }
}

void del_at_beg()
{
    if (head==NULL)
    {
        printf("the linked list is empty");
    }
    else
    {
        temp=head;
        head=head->next; //head will point to the nextnode
        free(temp);  //temp is still pointing to the 1st node, so delete the 1st node using temp
    }  
}

void del_at_end()
{
    struct node *prevnode;
    temp=head;
    while (temp->next!=NULL) //it will stop at last node
    {
        prevnode=temp;
        temp=temp->next;
    }                       //now temp is pointing to the last node
    if (temp==head)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        prevnode->next=NULL;
        free(temp);
    }    
}


void del_at_position()
{
    struct node * nextnode;
    int pos, i=1;
    temp=head;
    printf("Enter the position");
    scanf("%d",&pos);
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

int main()
{
    createll();
    display();  
    printf("\n%d",length);
    del_at_end();
    del_at_end();

    //insert_front();
    //display();

}