#include<iostream>
using namespace std;
#include<vector>

//Template function(generic function) to display the elements of a vector 
template<class T>
void display(vector<T> &krishna)
{
    vector<int> :: iterator i ;         //syntax for declaing the iterator
    //typename vector<T> :: iterator i;    //another way for declaing the iterator

    for( i = krishna.begin(); i!= krishna.end() ; i++ )
    {
        cout<< *i <<" ";    //dereferencing iterator i to get the value at i
    }
    cout<<endl;
}

//Template function to take input from the user
template<class T>
void take_input(vector<T> &vec)
{
    int size;
    cout<<"Enter the size of the vector : " ;
    cin>>size;
    for (int i = 0 ; i<size ; i++)
    {
        T element;    //imp
        cin>>element;
        vec.push_back(element);
    }
}

int main()
{
    vector<int> radhe;  //0 size vector called radhe
    //vector<char> radhe2(4);
    take_input(radhe);
    display(radhe);

}