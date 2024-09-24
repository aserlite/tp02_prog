#include <iostream>

int main() {
    int myInt = 11;
    std::cout << "La valeur de la variable entière est : " << myInt << std::endl;
    std::cout << "La valeur de la variable entière divisée par 2 est : " << myInt / 2 << std::endl;
    std::cout << "La valeur de la variable entière divisée par 2.0f est : " << static_cast<float>(myInt) / 2.0f << std::endl;
    return 0;
}