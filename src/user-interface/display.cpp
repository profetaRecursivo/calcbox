#include "display.h"
#include "colors.h"
#include <iostream>
#include <string>

void show_main_menu() {
    printBold("Bienvenido a calcbox\nEscoge uno de los siguientes modulos:\n");
    printColored(Color::YELLOW, "1. Teoria de numeros\n");
    printColored(Color::YELLOW, "2. Ordenamiento\n");
    printColored(Color::YELLOW, "3. Salir\n");
}

void show_error_message(const std::string& message) {
    printError("Error: " + message + "\n");
}

int show_module_menu(const int module_id) {
    switch (module_id) {
        case 1:
            printBold("Modulo de Teoria de numeros\n");
            printColored(Color::YELLOW, "\t1. Comprobar si un numero es primo\n");
            printColored(Color::YELLOW, "\t2. GCD de dos numeros\n");
            printColored(Color::YELLOW, "\t3. LCM de dos numeros\n");
            break;
        case 2:
            printBold("Modulo de Ordenamiento\n");
            printColored(Color::YELLOW, "\t1. Bubble Sort\n");
            printColored(Color::YELLOW, "\t2. Counting Sort\n");
            break;
        default:
            printError("Modulo no encontrado.\n");
            return -1;
    }
    return 0;
}
