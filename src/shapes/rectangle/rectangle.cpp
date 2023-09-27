#include "rectangle.h"
#include <iostream>

using namespace std;

namespace shapes {
    namespace rectangle {
        void rectangleArea() {
            cout << "RECTANGLE AREA" << endl;
            printf("---------------");
            cout << endl;

            double length, breadth = 0;

            cout <<"\nLength: ";
            cin >> length;

            cout <<"Breadth: ";
            cin >> breadth;
            cout << endl;

            double area = length * breadth;
            std::string result = "Area = " + std::to_string(area) + " (Length x Breadth)";

            cout << result << endl;
        }

        void rectanglePerimeter(){
            cout << "RECTANGLE PERIMETER" << endl;
            printf("--------------------");
            cout << endl;
            double length, breadth = 0;

            cout << "\nLength: ";
            cin >> length;

            printf("Breadth: ");
            cin >> breadth;
            cout << endl;

            double area = length * breadth;
            std::string result = "Area = " + std::to_string(area) + " (2 * [Length + Breadth])";

            cout << result << endl;
        }
    }
}
