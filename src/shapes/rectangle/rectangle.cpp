#include <iostream>
#include "rectangle.h"
#include "../../utils/utils.h"

using namespace std;

namespace shapes {
    namespace rectangle {
        void area();
        void perimeter();
        void display();

        void display() {
            std::cout << "RECTANGLE: PARAMETER CALCULATOR" << std::endl;
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "\n1. Area \n2. Perimeter \n3. Both\n" << std::endl;
        }

        void validateChoice(int choice) {
            if (choice < 1 || choice > 3) {
                std::cout << "Parameter should be in the range 1 to 3" << std::endl;
                exit(1);
            }
        }

        void handleShapeInput() {
            display();
            int parameter = getUserChoice();
            validateChoice(parameter);

            lineBreak();
            switch (parameter)
            {
                case 1:
                    area();
                    break;
                
                case 2:
                    perimeter();
                    break;

                default:
                    area();
                    perimeter();
                    break;
            }
        }

        void area() {
            std::cout << "RECTANGLE: AREA" << std::endl;
            std::cout << "---------------" << std::endl;

            double length, breadth = 0;

            std::cout << "\nLength: "; std::cin >> length;
            std::cout << "Breadth: "; std::cin >> breadth; std::cout << std::endl;

            double area = length * breadth;
            std::string result = "Area = " + std::to_string(area) + " (Length x Breadth)";

            std::cout << result << std::endl;
        }

        void perimeter(){
            std::cout << "RECTANGLE: PERIMETER" << std::endl;
            std::cout << "---------------" << std::endl;
            
            double length, breadth = 0;

            std::cout << "\nLength: "; std::cin >> length;
            std::cout << "Breadth: "; std::cin >> breadth; std::cout << std::endl;

            double area = 2 + (length + breadth);
            std::string result = "Perimeter = " + std::to_string(area) + " (2 * [Length + Breadth])";

            std::cout << result << std::endl;
        }
    }
}
