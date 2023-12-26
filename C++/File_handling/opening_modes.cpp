#include <iostream>
#include <fstream>

int main() {
    // Open a file for writing in binary mode
    std::ofstream outputFile("data.bin", std::ios::out | std::ios::binary);

    // Open a file for reading in binary mode
    std::ifstream inputFile("data.bin", std::ios::in | std::ios::binary);

    // Open a file for appending
    std::ofstream appendFile("log.txt", std::ios::out | std::ios::app);

    // Check if the files were opened successfully
    if (!outputFile || !inputFile || !appendFile) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    // Use the files for reading, writing, or appending...

    outputFile.close();
    inputFile.close();
    appendFile.close();

    return 0;
}
