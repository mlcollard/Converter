/*
    PDF.cpp

    Implementation file for PDF handling
*/

#include <iostream>
#include "pdf_parser.hpp"

void outputPDF(std::string_view filename) {

    std::cout << parse(filename) << '\n';
}
