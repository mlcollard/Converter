/*
    yaml_parser.hpp

    Include file for YAML parsing functions
*/

#ifndef YAML_PARSER_HPP
#define YAML_PARSER_HPP

#include <string>
#include <string_view>

// parse the given YAML file and returns its content
std::string parse(std::string_view filename);

#endif
