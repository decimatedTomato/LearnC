#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    // A color that contains the r, g, b, a components
    typedef unsigned int Color[4];
    
    // A position in 3d space
    typedef struct Point {
        float x, y, z;
    } Point;
    
    // A group of vertices in 3d space
    typedef Point Points[10];
    
    // A position in 3d space with an associated color
    typedef struct Colorful_Point {
        Point p;
        Color col;
    } Colorful_Point;
    
    // A group of vertices, each including an associated color
    typedef Colorful_Point Colorful_Points[10];

    Colorful_Points model = {
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}},
        {{0, 0, 0}, {0xFF, 0xFF, 0xFF, 0xFF}}
    };

    return 0;
}