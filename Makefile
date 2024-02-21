# Converter build

OBJECTS = PDF.o YAML.o converter.o pdf_parser.o yaml_parser.o

# executable
converter: $(OBJECTS)
	g++ -Wall -std=c++17 -o $@ $^

# compiling source files
converter.o: converter.cpp PDF.hpp YAML.hpp
	g++ -Wall -std=c++17 -c $<

PDF.o: PDF.cpp PDF.hpp pdf_parser.hpp
	g++ -Wall -std=c++17 -c $<

pdf_parser.o: pdf_parser.cpp pdf_parser.hpp
	g++ -Wall -std=c++17 -c $<

YAML.o: YAML.cpp YAML.hpp yaml_parser.hpp
	g++ -Wall -std=c++17 -c $<

yaml_parser.o: yaml_parser.cpp yaml_parser.hpp
	g++ -Wall -std=c++17 -c $<

# clean
.PHONY: clean
clean:
	rm -f converter $(OBJECTS)
