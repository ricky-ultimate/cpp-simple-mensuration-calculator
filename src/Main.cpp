#include <stdlib.h>
#include <iostream>
#define repeat(n) for (int i = 0; i < n; i++) 

using namespace std;

void rectangleArea(), rectanglePerimeter();
void parallelogramArea(), parallelogramPerimeter();
void triangleArea(), trapeziumArea();
void squareArea(), squarePerimeter();
void lineBreak();

void displayTitle() {
    cout <<"WELCOME TO THE MENSURATION (2D SHAPES) CALCULATOR!" << endl;
    printf("--------------------------------------------------");
    cout <<"\nThe available shapes are:" << endl;
    cout << " \n\t1. Rectangle \n\t2. Parallelogram \n\t3. Triangle \n\t4. Trapezium \n\t5. Square " << endl;
    cout <<"\n Enter the shape's number to continue: ";
}


int main(){
    displayTitle();

    int shape, parameter;   
    cin >> shape;
    cin.clear();

    if (shape == 1){
        system("cls");
        cin.clear();
        cout <<"THIS IS THE RECTANGLE PARAMETER CALCULATOR" <<endl;
        printf("------------------------------------------");
        cout << "\n1. Area \n2. Perimeter \n3. Both" <<endl;
        cout << "Which Parameter woud you like to calculate for?: ";
        cin >> parameter;

        if(parameter == 1){
            system("cls");
            rectangleArea();
            cin.clear();
            system("pause");
        }
        if(parameter == 2){
           system("cls");
           rectanglePerimeter();
           cin.clear();
           system("pause");
        }
        if(parameter == 3){
            system("cls");
            rectangleArea();
            lineBreak();
            rectanglePerimeter();
        }
    }

    if (shape == 2){
        system("cls");
        cin.clear();
        cout << "THIS IS THE PARALLELOGRAM PARAMETER CALCULATOR" <<endl;
        printf("-----------------------------------------------");
        cout << "\n1. Area \n2. Perimeter \n3. Both" <<endl;
        cout << "Which Parameter woud you like to calculate for?: ";
        cin >> parameter;

        if(parameter == 1){
            system("cls");
            parallelogramArea();
            cin.clear();
            system("pause");
        }
        if(parameter == 2){
            system("cls");
           parallelogramPerimeter();
           cin.clear();
           system("pause");
        }
        if(parameter == 3){
            system("cls");
            parallelogramArea();
            lineBreak();
            parallelogramPerimeter();
        }
    }

    if (shape == 3){
        system("cls");
        cin.clear();
        cout <<"THIS IS THE TRIANGLE PARAMETER CALCULATOR" <<endl;
        printf("-----------------------------------------");
        cout << endl;
        cout << "\nThe Triangle only has the area parameter... Enjoy" <<endl;
        cout << endl;
        system("pause");
        triangleArea();
    }

    if (shape == 4){
        system("cls");
        cin.clear();
        cout <<"THIS IS THE PARALLELOGRAM PARAMETER CALCULATOR" <<endl;
        printf("----------------------------------------------");
        cout << endl;
        cout << "\nThe Trapezium only has the area parameter... Enjoy" <<endl;
        cout << endl;
        system("pause");
        trapeziumArea();
    }

    if (shape == 5){
        system("cls");
        cin.clear();
        cout << "THIS IS THE SQUARE PARAMETER CALCULATOR" <<endl;
        printf("----------------------------------------");
        cout << "\n1. Area \n2. Perimeter \n3. Both" <<endl;
        cout << "Which Parameter woud you like to calculate for?: ";
        cin >> parameter;

        if(parameter == 1){
            system("cls");
            squareArea();
            system("pause");
            cin.clear();
        }
        if(parameter == 2){
           system("cls");
           squarePerimeter();
           system("pause");
           cin.clear();
        }
        if(parameter == 3){
            system("cls");
            squareArea();
            lineBreak();
            squarePerimeter();
        }
    }
}

void rectangleArea(){
    cout << "RECTANGLE AREA" << endl;
    printf("---------------");
    cout << endl;
    double l, b;  //l: length | b: breadth

    cout <<"\nLength: ";
    cin >> l;

    cout <<"Breadth: ";
    cin >> b;
    cout << endl;

    cout << "Area = " << l << " x " << b << " = " << l * b << endl;
    cout << endl;
}

void rectanglePerimeter(){
    cout << "RECTANGLE PERIMETER" << endl;
    printf("--------------------");
    cout << endl;
    double l, b;  //l: length | b: breadth

    cout << "\nLength: ";
    cin >> l;

    printf("Breadth: ");
    cin >> b;
    cout << endl;

    cout << "Perimeter = " << "2 * ( " << l << " + " << b << " )" << " = " << 2 * (l + b) << endl;
    cout << endl;
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


void lineBreak(){
    repeat(60){
        printf("_");
    }
    cout << "\n" << endl;
}
