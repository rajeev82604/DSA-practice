#include<stdio.h>   //backward moving are treated differently
#define n 4        //like insertfront and deleterear
#include<stdlib.h>
int dequeue[n];
int f=-1;
int r=-1;

int input() //input the elements
{
    int x;
    printf("Eter the element to insert");
    scanf("%d",&x);
    return x; 
}

void insertrear() //rear->forward movement(r++)
{
    int x=input();
    if ((r+1)%n==f)  //check for if full
    {
        printf("overflow");
    }
    else
    {
        r=(r+1)%n;
        dequeue[r]=x;
    }  
}

void insertfront() // f->backward movement here f=(f-1)%n will not work
{
    int x=input();
    if ((f==0 && r==n-1)|| f==r+1 )  // check if full
    {
        printf("overflow");
    }
    else if (f==-1&&r==-1)      //check if empty
    {
        f=r=0;
        dequeue[f]=x;
    }
    else if (f==0)     
    {
        f=n-1;
        dequeue[f]=x;
    }
    else
    {
        f--;
        dequeue[f]=x;
    }
}

void deletefront() //front->forward
{
    if (f==-1 && r==-1)
    {
        printf("underflow");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        f=(f+1)%n;
    }
}
void deleterear()
{
    if (f==-1 && r==-1)
    {
        printf("underflow");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else if (r==0)
    {
        r=n-1;
    }
    else
    {
        r--;
    }  
}

void display()
{
    
    if (f==-1&&r==-1)
    {
        printf("dequeue is empty");
    }
    
    else
    {int i=f;
    while (i!=r)
    {
        printf("%d",dequeue[i]);
        i=(i+1)%n;
    }
    printf("%d",dequeue[r]);}
}

int main()
 {
    while(1)
    {
        int choice;
        printf("\n");
        printf("\n1. insertfront\n");
        printf("2. insertrear\n");
        printf("3. deletefront\n");
        printf("4. deleterear\n");
        printf("5. display\n");
        printf("6. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insertfront();
            break;
        case 2:
            insertrear();
            break;
        case 3:
            deletefront();
            break;
        case 4:
            deleterear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        }
    }
 }