/*
    YAML.cpp

    Implementation file for YAML parsing
*/

#include <iostream>
#include "yaml_parser.hpp"

void outputYAML(std::string_view filename) {

    std::cout << parse(filename) << '\n';
}
