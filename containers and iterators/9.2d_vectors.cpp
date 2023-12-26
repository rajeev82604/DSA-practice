//Doubt
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector < vector<int> > vec ; //vector of vectors

    vector<int> v1;
    v1.push_back(1);    v1.push_back(2);
    vector<int> v2;
    v2.push_back(3);    v2.push_back(4);

    vec.push_back(v1);
    vec.push_back(v2);
    
    //printing a 2d vector
    for(auto i:vec)
    {
        for(auto j : i)
        {
            cout<<j <<" ";      //o/p = 1 2 3 4
        }
        //cout<<endl;
    }
    cout<<endl;
    
    //traditional way of printing the array
    for (int i = 0 ; i<vec.size() ; i++)
    {
        for(int j= 0 ; j< vec[i].size() ; j++)
        {
            cout<< vec[i][j] <<" ";                 //o/p = 1 2 3 4
        }
    }
    cout<<endl;
    
    //defining a 3 x 4 vector and filling it with zeroes:
    
    vector <vector<int>>  vec2(3 , vector<int>(4,0)  ); //here there are a total of 3 elements, and each element is in itself a vector of size 4(so rows=3,columns=4)
    for(auto i : vec2)
    {
        for(auto j : i )
        {
            cout<< j <<" ";
        }
        cout<<endl;
    }
    
    //array of vectors
    vector<int> arr[4]; //here each element of the array is a vector
    //in the above declaration, the individual elements are dynamic, but the overall array is of fixed length 
    
    //3d vector of 2x3x4 //put a 2d vector of (3x4) inside another vector
    vector<vector<vector<int>>> vec3(2, vector<vector<int>>(3, vector<int>(4, 0)));    
    for (auto i : vec3)
    {
        for(auto j : i)
        {
            for(auto k : j)
            {
                cout<<k <<" ";
            }
        }
    }
    return 0;
}