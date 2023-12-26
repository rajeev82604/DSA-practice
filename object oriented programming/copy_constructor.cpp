//user defined copy constructor created successfully
//if there is only user made copy constructor in a class then, can we create an object?
#include<iostream>
using namespace std;

class hero {
    public:
    char * name;

    void setName(char name[]) {
        strcpy(this->name, name);
        //this->name=name;
    }
    hero (){    // this constructor is required, otherwise it will give error and we cant create an object
       name= new char[100]; //this line is important because we need to first create a array then we should point name to that pointer
    }
    // hero (const hero& temp){
    //     char * newname = new char[30];
    //     strcpy(newname,temp.name);
    //     this -> name = newname;
    // }
};
int main ()
{
    // hero mahesh;
    // mahesh.setname("mahesh");
    // hero surya(mahesh);
    // cout<<mahesh.name<<endl<<surya.name<<endl;
    // surya.name = "hello";
    // cout<<endl<<mahesh.name<<endl<<surya.name<<endl;

    //shallow copy:
    hero mahesh;
    mahesh.setName("mahesh babu") ;
    hero surya(mahesh);
    cout<<mahesh.name<<endl<<surya.name<<endl;
    
    mahesh.name="hello";
    cout<<mahesh.name<<endl<<surya.name<<endl;
}