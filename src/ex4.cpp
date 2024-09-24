#include <iostream>

int main() {
    int jours;
    std::cout << "Entrez le nombre de jours : ";
    std::cin >> jours;

    int annees = jours / 365;
    int mois = (jours % 365) / 30;
    int semaines = ((jours % 365) % 30) / 7;
    int joursRestants = ((jours % 365) % 30) % 7;

    std::cout << jours << " jours correspondent à : " << annees << " années, "
              << mois << " mois, " << semaines << " semaines, " << joursRestants << " jours" << std::endl;

    return 0;
}