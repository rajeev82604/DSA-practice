#include<stdio.h>
#include<stdlib.h>
#define max 3

int queue[max];
int front = -1;
int rear = -1;

void enqueue ()
{
    int x;                                  //input element for insertion 
    printf("Enter element to enqueue : ");
    scanf("%d",&x);

    if (rear == max-1)          //check whether the queue is full or not
    {
        printf("overflow");
    }  
    else if (front==-1 && rear==-1)     //cheking whether the queue is empty or not
    {
        front=rear=0;               //if empty,then set both front and rear to 0 and then insert at rear
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }    
}

void dequeue()  //when queue is empty, while printing it, queue[-1] is giving undefined behaviour

{
    if (front==-1&&rear==-1)    //check if queue is empty, then print underflow if true
    {
        printf("unrerflow");
    }
    else if (front==rear)
    {
        front=rear=-1;       //if front and rear point to the same index, then empty the queue
    }
    else{
        front++;        //else increment the front value
    }
}

void display()
{
    if (front==-1&&rear==-1)
    {
        printf("empty");
    }
    else
    {
        for ( int i = front; i <= rear; i++)
        {
        printf("%d",queue[i]);
        }
    }
    printf("\n");
}

void peek()
{
    if (front==-1 && rear==-1)
    {
        printf("\nempty queue");
    }
    printf("\nElement at peak is :%d",queue[front]);
   printf("\n"); 
}
int main()
{
    while(1)
    {
        int choice;
        printf("\n");
        printf("\n1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }

}