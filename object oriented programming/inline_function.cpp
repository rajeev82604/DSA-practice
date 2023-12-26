// we have to use the keyword "inline" just during the function declaration, rest everything is same
//The decision to inline a function ultimately lies with the compiler; 
//the inline keyword is more of a suggestion rather than a command.


#include <iostream>
using namespace std;

// Declaration of inline function
inline int add(int a, int b) {      //syntax is almost same, just write inline before the usual function declaration
    cout << "Inline function called"<<endl;
    return a + b;
}

int main() {
    int x = 5, y = 3;
    int result = add(x, y); // The function call is replaced with the function body

    cout << "Result of addition: " << result << std::endl; //endl is also inside std
    return 0;
}
