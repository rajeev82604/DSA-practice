#include<stdio.h>
#define n 10
int dequeue[n];
int front=-1;
int rear=-1;

void enqueuefront(int x)
{
    if ((front==0 && rear==n-1) || front==rear+1 )
    {
        printf("Dequeue is full : ");
    }
    else if (front==-1&&rear==-1)
    {
        front=rear=0;
        dequeue[front]=x;
    }
    else if (front==0)
    {
        front=n-1;
        dequeue[front]=x;
    }
    else
    {
        front--;
        dequeue[front]=x;
    } 
}

void enqueuerear(int x)
{
   
    if ((front==0 && rear==n-1 ) || front==rear+1 ) //check if dequeue is full 
    {                                          //(rear+1)%n==front
        printf("Dequeue is full : ");
    }

    else if (front==-1 && rear==-1)  //if dequeue is empty, then set f and r to 0 and then insert at rear
    {
        front=rear=0;
        dequeue[rear]=x;
    }

    else if (rear==n-1)
    {
        rear=0;
        dequeue[rear]=x;
    }
    else
    {
        rear++;
        dequeue[rear]=x;
    } 
}

void dequeuefront()
{
    if (front==-1 && rear==-1)
    {
        printf("dequeue is empty");
    }
    else if(front == rear)
    {
        printf("The deleted element is : %d",dequeue[front]);
        front=rear=-1;
    }
    else if(front==n-1)
    {
        printf("The deleted element is : %d",dequeue[front]);
        front=0;
    }
    else
    {
        printf("The deleted element is : %d",dequeue[front]);
        front++;
    }
}

void dequeuerear()
{
    if (front==-1 && rear==-1)
    {
        printf("dequeue is empty");
    }
    else if(front == rear)
    {
        printf("The deleted element is : %d",dequeue[rear]);
        front=rear=-1;
    }
    else if (rear==0)
    {
        printf("The deleted element is : %d",dequeue[rear]);
        rear=n-1;
    }
    else
    {
        printf("The deleted element is : %d",dequeue[rear]);
        rear--;
    }
}

int main()
{

}