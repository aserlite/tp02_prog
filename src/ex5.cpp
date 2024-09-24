#include <iostream>

int main() {
    int number;
    char letter;

    std::cout << "Veuillez saisir un nombre entier entre 1 et 26 : ";
    std::cin >> number;

    if (number >= 1 && number <= 26) {
        letter = 'A' + number - 1;
        std::cout << "La lettre correspondante est : " << letter << std::endl;
    } else {
        std::cout << "Le nombre saisi n'est pas valide." << std::endl;
    }

    return 0;
}