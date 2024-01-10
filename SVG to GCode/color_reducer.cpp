#include "color_reducer.h"
#include <iostream>
#include <string>
#include <vector>



void color_reducer() {
    // Test the color_reducer function
    std::string svgFile = "example.svg";
    std::string modifiedSvgFile = color_reducer(svgFile);
    std::cout << "Modified SVG file: " << modifiedSvgFile << std::endl;

}
