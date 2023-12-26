#include<stdio.h>
#include<string.h>
typedef struct laptop 
{
    int number;
    char name[10];
}n;   // here n is not a vatiable, but just a name with which you want to replace the structure

int main()
{
    n m;
    strcpy(m.name,"apple"); //we cant directly assign a set of characters to a string, we have to use strcpy instread
    printf("%s",m.name);

}