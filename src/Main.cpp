#include <stdlib.h>
#include <iostream>
#include "display/display.h"
#include "shapes/rectangle/rectangle.h"

using namespace std;
namespace shapes {
    namespace rectangle {
        void area();
        void perimeter();
    }
}

void refreshStdOut() {
    system("cls");
    cin.clear();
}

void lineBreak() {
    cout << "\n\n" << endl;
}

void displayRectangleMenu() {
    std::cout << "RECTANGLE: PARAMETER CALCULATOR" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "\n1. Area \n2. Perimeter \n3. Both\n" << std::endl;
}

int getUserChoice() {
    int choice;
    std::cout << "Which parameter would you like to calculate for?: ";
    std::cin >> choice;
    return choice;
}

void validateChoice(int choice) {
    if (choice < 1 || choice > 3) {
        std::cout << "Parameter should be in the range 1 to 3" << std::endl;
        exit(1);
    }
}

void handleShapeInput(int shape) {
    if (shape < 1 || shape > 5) {
        exit(1);
    }

    refreshStdOut();

    if (shape == 1) {
        displayRectangleMenu();
        int parameter = getUserChoice();

        validateChoice(parameter);
        lineBreak();

        if (parameter == 1) {
            shapes::rectangle::area();
        } else if (parameter == 2) {
            shapes::rectangle::perimeter();
        } else {
            shapes::rectangle::area();
            lineBreak();
            shapes::rectangle::perimeter();
        }
    }
    
}

int main(){
    displayTitle();

    int shape = 0;   
    cin >> shape;
    cin.clear();

    handleShapeInput(shape);
}

void parallelogramArea(){
    cout << "PARALLELOGRAM AREA CALCULATOR" << endl;
    printf("------------------------------");
    cout << endl;
    double b, h;

    cout << "\nHorizontal Length(b): ";
    cin >> b;

    printf("Height (h): ");
    cin >> h;
    cout << endl;

    cout << "Area = " << b << " x " << h << " = " << b * h << endl;
    cout << endl;
}

void parallelogramPerimeter(){
    cout << "PARALLELOGRAM PERIMETER CALCULATOR" << endl;
    printf("-----------------------------------");
    cout <<endl;
    double a, b;

    cout << "\nVertical height(a): ";
    cin >> a;

    printf("Horizontal length (b): ");
    cin >> b;
    cout << endl;

    cout << "Perimeter = " << "2 * ( " << a << " + " << b << " )" << " = " << 2 * (a + b) << endl;
    cout << endl;
}

void triangleArea(){
    system("cls");
    cout <<"TRIANGLE AREA CALCULATOR" << endl;
    printf("------------------------");
    double b, h;

    cout << "\nLength of base (b): ";
    cin >> b;

    printf("Height: ");
    cin >> h;
    cout << endl;

    cout << "Area = " << " 1/2 x " << b << " x " << h << " = " << 0.5 * b * h << endl;
    cout << endl;
    system("pause");
}

void trapeziumArea(){
    system("cls");
    cout <<"TRAPEZIUM AREA CALCULATOR" << endl;
    printf("-------------------------");
    cout << endl;
    double a, b, h;

    cout << "\nLength of top side (a): ";
    cin >> a;

    printf("Length of base (b): ");
    cin >> b;

    printf("Vertical height (h): ");
    cin >> h;
    cout << endl;

    cout << "Area = " << " 1/2 x " << "( " << a << " + " << b << " )" << " x " << h << " = " <<  0.5 * (a + b) * h << endl;
    cout << endl;
    system("pause");
}


void squareArea(){
    cout <<"SQUARE AREA CALCULATOR" << endl;
    printf("----------------------");
    cout << endl;
    double d;

    cout << "\n Length of side (d): ";
    cin >> d;
    cout << endl;

    cout << "Area = " << d << " x " << d << " = " << d * d << endl;
    cout << endl;
}

void squarePerimeter(){
    cout <<"SQUARE PERIMETER CALCULATOR" << endl;
    printf("---------------------------");
    cout << endl;
    double d;

    cout << "\nLength of side (d): ";
    cin >> d;
    cout << endl;

    cout << "Perimeter = " << " 4 x " << d << " = " << 4 * d << endl;
    cout << endl;
}
