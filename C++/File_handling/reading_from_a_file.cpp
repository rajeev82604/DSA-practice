//reading single word(object_name>>variable) , getline(object_name,variable)
#include<iostream>
using namespace std;

#include<fstream>

int main()
{
    string s1,s2,s3,s4;
    ifstream radhe("test.txt"); //opening file using default constructor                            
                                //does not creates new file if the file does not exists, but it does gives error also
    
    // radhe>>s1;   //only reads a single word
    // cout<<s1 <<endl;

    getline(radhe,s2);
    cout<<s2 <<endl;

    radhe>>s2;    //now the pointer has moved forward, so it will now read the word present on the next line 
    cout<<s2 <<endl;

    getline(radhe,s4);
    cout<<s4 <<endl;

   
    radhe.close();
    /*

    file content:
    kanheiya radhe
    jai bolo kripaluji maharaj ki
    gurudev 

    output:
    kanheiya radhe
    jai
     bolo kripaluji maharaj ki

    */
}