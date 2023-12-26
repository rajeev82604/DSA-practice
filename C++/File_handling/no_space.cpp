#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt"); // Open input file
    std::ofstream outputFile("output.txt"); // Open/create output file

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Unable to open files\n";
        return 1;
    }

    std::string word;
    while (inputFile >> word) { // Read word by word from input file
        outputFile << word << ' '; // Write the word to the output file with a space
    }

    // Close files
    inputFile.close();
    outputFile.close();

    std::cout << "Extra spaces removed. Result written to output.txt.\n";

    return 0;
}
