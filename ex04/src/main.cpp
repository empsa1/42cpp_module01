#include <iostream>
#include <fstream>
#include <sstream>

void replaceAll(std::string& str, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
        pos += s2.length();
    }
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Illegal usage" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(fileName.c_str());
    if (!inputFile) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::ofstream outputFile((fileName + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error creating output file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        replaceAll(line, s1, s2);
        outputFile << line << '\n';
    }

    std::cout << "Replacement completed!" << std::endl;

    return 0;
}