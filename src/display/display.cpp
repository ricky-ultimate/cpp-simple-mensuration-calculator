#include "display.h"
#include <iostream>

using namespace std;

void displayTitle() {
    cout <<"WELCOME TO THE MENSURATION (2D SHAPES) CALCULATOR!" << endl;
    printf("--------------------------------------------------");

    cout <<"\nThe available shapes are:" << endl;
    cout << " \n\t1. Rectangle \n\t2. Parallelogram \n\t3. Triangle \n\t4. Trapezium " << endl;

    cout <<"\nEnter the shape's number to continue: ";
}