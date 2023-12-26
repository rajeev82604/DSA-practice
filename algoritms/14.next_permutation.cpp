//permutation are lexicophically sorted
//in interview dont use stl way , do the recursive way instead
//all permutations of "abc"  lexicographically:
//abc
//acb
//bac
//bca
//cab
//cba
//implementatins on youtube (tuv) available
//there are a total n!(n factorial) permutations
#include <bits/stdc++.h>
using namespace std;
int main() {

    string s = "abc" ;
    bool result = next_permutation(s.begin(),s.end());
    //this returns true if the string has moved to its next permutation otherwise it returns false 
    cout<<s <<endl; //acb
    
    string s2="cba";
    bool result2 = next_permutation(s2.begin(),s2.end());
    cout<<result2 << " " <<s2 <<endl; //0 abc false(or 0), it is because cba is the last permutation 

    //for printing all the permutations
    string s3 = "bca";
    sort(s3.begin(),s3.end());
    do{
        cout<< s3 <<endl;
    }while(next_permutation(s3.begin(),s3.end()));
    
    int arr[] = {1,5,3};
    int n = 3;
    sort(arr,arr+n);
    do{
        for(int i = 0 ; i<n;i++)
        {
            cout<<arr[i] << " ";
        }cout<<endl;
    }while(next_permutation(arr,arr+n));
    
    return 0;
}