//write operation
// object_name<<"string"; or object_name << variable;
#include <iostream>
using namespace std;
#include <fstream>

int main()  //here, if the file does'nt exists, then it will create a new file
{
    ofstream radhe("test.txt"); //ofstream -> class and radhe-> object
    radhe<<"radhekrishna chalo \n mere saath"<<endl;//it erases everything inside the file and then writes into the file
    radhe<<"radheshyam"<<" hari bol"<<endl;
    radhe<<"kripaluji maharaj" <<endl;
    radhe<<5<<endl;   //nummbers
    radhe<<6<<endl;
    radhe<<7<<endl;
    radhe.close();
}