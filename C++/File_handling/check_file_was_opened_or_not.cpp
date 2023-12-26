//inside if, object name returns true if opening was successfull and false in other case
#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    ifstream radhe;
    radhe.open("test1.txt");

    if(radhe){
        cout<<"File opened successfully"<<endl;
    }
    else{
        cout<<"Failed to open the file"<<endl;
    }
}