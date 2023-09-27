#include <iostream>
#include "utils.h"

using namespace std;
namespace shapes {
    namespace rectangle {
        void display();
        void handleShapeInput();
    }

    namespace parallelogram {
        void display();
        void handleShapeInput();
    }

    namespace triangle {
        void display();
        void handleShapeInput();
    }

    namespace trapezium {
        void display();
        void handleShapeInput();
    }
}

void refreshStdOut() {
    system("cls");
    cin.clear();
}

void lineBreak() {
    cout << "\n" << endl;
}

int getUserChoice() {
    int choice;
    std::cout << "Which parameter would you like to calculate for?: ";
    std::cin >> choice;
    return choice;
}

void handleShapeInput(int shape) {
    if (shape < 1 || shape > 4) {
        exit(1);
    }

    refreshStdOut();

    switch (shape)
    {
        case 1:
            shapes::rectangle::handleShapeInput();
            break;

        case 2:
            shapes::parallelogram::handleShapeInput();
            break;

        case 3:
            shapes::triangle::handleShapeInput();
            break;

        case 4:
            shapes::trapezium::handleShapeInput();
            break;
        
        default:
            shapes::rectangle::handleShapeInput();
            break;
    }
}