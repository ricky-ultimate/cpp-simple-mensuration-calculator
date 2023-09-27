#include <iostream>
#include "rectangle.h"
#include "../../utils/utils.h"

using namespace std;

namespace shapes {
    namespace triangle {
        void area();
        void perimeter();
        void display();

        void display() {
            std::cout << "TRIANGLE: PARAMETER CALCULATOR" << std::endl;
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
            std::cout << "TRIANGLE: AREA" << std::endl;
            std::cout << "---------------" << std::endl;

            double base, height = 0;

            std::cout << "\Base: "; std::cin >> base;
            std::cout << "Height: "; std::cin >> height; std::cout << std::endl;

            double area = 0.5 * base * height;
            std::string result = "Area = " + std::to_string(area) + " (1/2 x Base x Height)";

            std::cout << result << std::endl;
        }

        void perimeter(){
            std::cout << "TRIANGLE: PERIMETER" << std::endl;
            std::cout << "---------------" << std::endl;
            
            double sideOne, sideTwo, sideThree = 0;

            std::cout << "\Side One: "; std::cin >> sideOne;
            std::cout << "\Side Two: "; std::cin >> sideOne;
            std::cout << "Side Three: "; std::cin >> sideThree; std::cout << std::endl;

            if (sideThree > (sideOne + sideTwo)) {
                std::cout << "Side Three must be less than side one + side two" << std::endl;
                exit(1);
            }

            double perimeter = sideOne + sideTwo + sideThree;
            std::string result = "Perimeter = " + std::to_string(perimeter) + " (2 * [Length + Breadth])";

            std::cout << result << std::endl;
        }
    }
}
