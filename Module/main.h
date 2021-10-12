#include <stdio.h>
#include <iostream>

void Calculation(int no1, int no2, char op) {

    switch(op) {
        case '+':
            std::cout << no1 << " + " << no2 << " = " << no1 + no2;
            break;

        case '-':
            std::cout << no1 << " - " << no2 << " = " << no1 - no2;
            break;

        case '*':
            std::cout << no1 << " * " << no2 << " = " << no1 * no2;
            break;

        case '/':
            std::cout << no1 << " / " << no2 << " = " << no1 / no2;
            break;

        default:
            std::cout << "[ERROR] Operator Is Incorect please valid enter operator";
            printf("\n");
            break;
    }
    printf("\n");
}