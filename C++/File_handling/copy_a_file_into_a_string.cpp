#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    string s1, s2;
    //opening the file using open() function
    ifstream radhe;
    radhe.open("test.txt");

   // we can also write while( getline(radhe,s1) ) {};
    while (radhe) // It returns true as long as there are lines left to read in the file.
    {                        //we can also use while(radhe.eof()==0){}
        getline(radhe,s1);
        s2 = s2 + s1 + "\n"; //
    }
    
    cout<<s2;
    radhe.close();

}