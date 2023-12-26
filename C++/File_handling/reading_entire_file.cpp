//it prints the data of the entire file
#include<iostream>
using namespace std;
#include<fstream>
//#include<string>
int main()
{
    string s;
    //opening the file using open() function
    ifstream radhe;
    radhe.open("test.txt");

    
    while (radhe.eof()== 0)
    {
        getline(radhe,s);
        cout<<s;
    }
    
    
    radhe.close();

}