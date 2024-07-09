#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>

int main () {
    double a;
    double b;
    double c;
    int choice;

    do {
        std::cout << "************** Hypotenuse Calculator ****************" << std::endl;
        std::cout << "Enter side A: ";
        std::cin >> a;
        std::cout << "Enter side B: ";
        std::cin >> b;

        a = pow(a, 2);
        b = pow(b, 2);
        c = sqrt(a + b);

        std::cout << "Hypotenuse is = " << c << std::endl;

        std::cout << "Press '1' to calculate another hypotenuse or '2' to terminate: ";
        std::cin >> choice;
    } while (choice == 1);

    return 0;
}
