#include <iostream>

int main() {
    int myVariable {42}; 

    myVariable++;
    std::cout << "Après l'incrémentation : " << myVariable << std::endl;

    myVariable *= 3; 
    std::cout << "Après la multiplication : " << myVariable << std::endl;

    myVariable /= 2; 
    std::cout << "Après la division : " << myVariable << std::endl;

    return 0;
}