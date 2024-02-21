/*
    converter.cpp

    Converts files of assorted formats
*/

#include <iostream>
#include <string>
#include <filesystem>
#include "PDF.hpp"
#include "YAML.hpp"

int main(int argc, char* argv[]) {

    std::filesystem::path filePath(argv[1]);

    // output the input depending on the file type
    if (filePath.extension() == ".pdf") {
        // output pdf file
        outputPDF(filePath.string());
    } else {
        // output yaml file
        outputYAML(filePath.string());
    }

    return 0;
}
