// Lab-5-ADG.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Shape.h"
#include "Square.h"

int main()
{

	Shape* soyUnaFigura = new Square(2.0);

	double resultado = soyUnaFigura->calculateArea();

    std::cout << "Hola, el area de un cuadrado de base 2 es !\n";
	std::cout << resultado;
}

