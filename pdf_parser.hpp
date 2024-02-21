/*
    pdf_parser.hpp

    Include file for pdf parsing functions
*/

#ifndef PDF_PARSER_HPP
#define PDF_PARSER_HPP

#include <string>
#include <string_view>

// parse the given PDF file and return its content
std::string parse(std::string_view filename);

#endif
