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
    for (size_t i = 0; i < sizeof(model)/sizeof(Colorful_Point); i++) {
        printf("Point %f,%f,%f Color: %d %d %d %d\n", model[i].p.x, model[i].p.y, model[i].p.z, model[i].col[0], model[i].col[1], model[i].col[2], model[i].col[3]);
    }
    

    return 0;
}