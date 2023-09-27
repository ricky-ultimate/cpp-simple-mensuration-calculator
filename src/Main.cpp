#include <stdlib.h>
#include <iostream>
#include "utils/utils.h"
#include "display/display.h"
#include "shapes/rectangle/rectangle.h"

using namespace std;

int main(){
    displayTitle();

    int shape = 0;   
    std::cin >> shape;

    handleShapeInput(shape);
}

// parallelogram
// trapezium