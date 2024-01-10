#ifndef color_reducer
#define color_reducer

// Function to reduce colors in an SVG file
std::string color_reducer(const std::string& svgFile) {
    // Read the SVG file and extract the colors
    // ...

    // Check if there are more than 4 colors
    if (colors.size() > 4) {
        // Reduce the colors to yellow, red, green, and blue
        // ...

        // Assign the reduced colors to the paths in the SVG file
        // ...

        // Return the modified SVG file
        return modifiedSvgFile;
    } else {
        // Assign the existing colors to the named colors
        // ...

        // Return the original SVG file
        return svgFile;
    }
}
