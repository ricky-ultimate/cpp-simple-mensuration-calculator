#include "rectangle.h"
#include <iostream>

using namespace std;

namespace shapes {
    namespace rectangle {
        void rectangleArea() {
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
    }
}
