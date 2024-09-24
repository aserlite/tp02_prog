#include <iostream>
#include <limits>

int main() {
    int numPotatoBags, numCarrots{5}, numSalads;
    const double potatoWeight = 2.0;
    const double potatoPricePerKg = 1.5;
    const double carrotWeight = 0.15;
    const double carrotPricePerKg = 2.5;
    const double saladPrice = 1.2;

    std::cout << "Entrer le nombre de sacs de pomme de terre: ";
    std::cin >> numPotatoBags;
    while (std::cin.fail() || numPotatoBags < 0) {
        std::cout << "Veuillez entrer un nombre valide de sacs de pomme de terre: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> numPotatoBags;
    }

    std::cout << "Entrer le nombre de carrotes: ";
    std::cin >> numCarrots;
    while (std::cin.fail() || numCarrots < 0) {
        std::cout << "Veuillez entrer un nombre valide de carrotes: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> numCarrots;
    }

    std::cout << "Entrer le nombre de salades: ";
    std::cin >> numSalads;
    while (std::cin.fail() || numSalads < 0) {
        std::cout << "Veuillez entrer un nombre valide de salades: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> numSalads;
    }

    double totalPotatoPrice = numPotatoBags * potatoWeight * potatoPricePerKg;
    double totalCarrotPrice = numCarrots * carrotWeight * carrotPricePerKg;
    double totalSaladPrice = numSalads * saladPrice;
    double totalPrice = totalPotatoPrice + totalCarrotPrice + totalSaladPrice;

    std::cout << "Le prix total de la commande est de " << totalPrice << " €" << std::endl;
    std::cout << "Détails:" << std::endl;
    std::cout << "- " << numPotatoBags << " sacs de pommes de terre : " << totalPotatoPrice << " €" << std::endl;
    std::cout << "- " << numCarrots << " carottes : " << totalCarrotPrice << " €" << std::endl;
    std::cout << "- " << numSalads << " salade : " << totalSaladPrice << " €" << std::endl;

    return 0;
}