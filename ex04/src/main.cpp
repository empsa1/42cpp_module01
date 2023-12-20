#include <iostream>
#include <fstream>
#include <sstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    size_t startPos = 0;
    while ((startPos = str.find(from, startPos)) != std::string::npos) {
        str = str.substr(0, startPos) + to + str.substr(startPos + from.length());
        startPos += to.length();
    }
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return -1;
    }

    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        std::cout << "Error opening input file." << std::endl;
        return -1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string fileContent = buffer.str();
    inputFile.close();

    replaceAll(fileContent, s1, s2);

    std::ofstream outputFile(fileName + ".replace");
    if (!outputFile.is_open()) {
        std::cout << "Error creating output file." << std::endl;
        return -1;
    }

    outputFile << fileContent;
    outputFile.close();

    std::cout << "Replacement completed successfully." << std::endl;
    return 0;
}