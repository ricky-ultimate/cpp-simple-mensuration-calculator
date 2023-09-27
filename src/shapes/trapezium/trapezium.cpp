#include <iostream>
#include "trapezium.h"
#include "../../utils/utils.h"

using namespace std;

namespace shapes {
    namespace trapezium {
        void area();
        void perimeter();
        void display();

        void display() {
            std::cout << "TRAPEZIUM: PARAMETER CALCULATOR" << std::endl;
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
            std::cout << "TRAPEZIUM: AREA" << std::endl;
            std::cout << "---------------" << std::endl;

            double sideOne, sideTwo, height = 0;

            std::cout << "\nSide one: "; std::cin >> sideOne;
            std::cout << "Side two: "; std::cin >> sideTwo;
            std::cout << "Height: "; std::cin >> height; std::cout << std::endl;

            double area = (0.5 * (sideOne + sideTwo)) * height;
            std::string result = "Area = " + std::to_string(area) + " 1/2 * (a + b)h";

            std::cout << result << std::endl;
        }

        void perimeter(){
            std::cout << "TRAPEZIUM: PERIMETER" << std::endl;
            std::cout << "---------------" << std::endl;
            
            double sideOne, sideTwo, sideThree, sideFour = 0;

            std::cout << "\nSide one: "; std::cin >> sideOne;
            std::cout << "Side two: "; std::cin >> sideTwo;
            std::cout << "Side three: "; std::cin >> sideThree;
            std::cout << "Side four: "; std::cin >> sideFour; std::cout << std::endl;

            double perimeter = sideOne + sideTwo + sideThree + sideFour;
            std::string result = "Perimeter = " + std::to_string(perimeter) + " (a + b + c + d)";

            std::cout << result << std::endl;
        }
    } 
}