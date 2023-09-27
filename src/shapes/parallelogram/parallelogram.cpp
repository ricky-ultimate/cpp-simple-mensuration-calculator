#include <iostream>
#include "parallelogram.h"
#include "../../utils/utils.h"

using namespace std;

namespace shapes {
    namespace parallelogram {
        void area();
        void perimeter();
        void display();

        void display() {
            std::cout << "PARALLELOGRAM: PARAMETER CALCULATOR" << std::endl;
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
            std::cout << "PARALLELOGRAM: AREA" << std::endl;
            std::cout << "---------------" << std::endl;

            double sideOne, sideTwo, height = 0;

            std::cout << "\nSide One: "; std::cin >> sideOne;
            std::cout << "\nSide Two: "; std::cin >> sideTwo;
            std::cout << "Height: "; std::cin >> height; std::cout << std::endl;

            double area = 0.5 * (sideOne + sideTwo) + height;
            std::string result = "Area = " + std::to_string(area) + " (1/2 * (a + b) * h)";

            std::cout << result << std::endl;
        }

        void perimeter(){
            std::cout << "PARALLELOGRAM: PERIMETER" << std::endl;
            std::cout << "---------------" << std::endl;
            
            double sideOne, sideTwo = 0;

            std::cout << "\nSide One: "; std::cin >> sideOne;
            std::cout << "Side Two: "; std::cin >> sideTwo; std::cout << std::endl;

            double perimeter = 2 * (sideOne + sideTwo);
            std::string result = "Perimeter = " + std::to_string(perimeter) + " (2 * (a + b))";

            std::cout << result << std::endl;
        }
    }
}