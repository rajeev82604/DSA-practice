#include<iostream>
using namespace std;
#include <fstream>

int main() {
    fstream file("example.txt", ios::in | ios::out);

    if (file.is_open()) {
        file.seekp(5); // Sets the output pointer to the 6th byte from the beginning
        file << "Hello"; // Writes "Hello" starting from the 6th byte
        file.seekg(0, ios::end); // Sets the input pointer to the end of the file
        char ch;
        file.get(ch); // Reads the last character from the file
        cout << "Last character: " << ch << endl;
        file.close();
    }

    return 0;
}

