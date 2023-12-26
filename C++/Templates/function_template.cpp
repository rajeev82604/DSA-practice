 #include<iostream>
 using namespace std;

template<class r1, class r2>
r1 add(r1 var1, r2 var2)
{
    return var1+var2;
}

int main()
{
    cout<<add(3,4.9) <<endl;
}