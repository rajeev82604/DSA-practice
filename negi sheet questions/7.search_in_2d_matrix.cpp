//did not solve using binary search
#include <bits/stdc++.h>
using namespace std;

bool linearsearchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                if( matrix[i][j] == target )
                {
                    return true;
                }
            }
        }
        return false;
}

bool binarysearchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        

}


int main() {
    vector < vector<int> > vec = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<< linearsearchMatrix(vec,13);
    return 0;
}