#include <iostream>
#include "utils.h"

using namespace std;
namespace shapes {
    namespace rectangle {
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
    if (shape < 1 || shape > 5) {
        exit(1);
    }

    refreshStdOut();

    if (shape == 1) {
        shapes::rectangle::handleShapeInput();
    }
}