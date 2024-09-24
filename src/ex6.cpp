#include <iostream>
#include <math.h>

int main()
{
    int a = M_PI *3 ;
    int b = 8;

    b += 20;  // je veux ajouter le nombre 20 à la valeur de b

    b = b * 15; // je veux modifier la valeur de b en la multipliant par 15

    std::cout << "a: " << a << std::endl;

    std::cout << "b: " << b << std::endl;

    return 0;
}