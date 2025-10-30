// Lab-5-ADG.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

int main()
{

	Shape* soyUnaFigura = new Square(2.0);
	Shape* soyOtraFigura = new Circle(2.0);
	Shape* soyNuevaFigura = new Triangle(2.0, 2.0);

	double resultadoCuadro = soyUnaFigura->calculateArea();
	double resultadoCirculo = soyOtraFigura->calculateArea();
	double resultadoTriangulo = soyNuevaFigura->calculateArea();
    std::cout << "Hola, el area de un cuadrado de base 2 es !\n";
	std::cout << resultadoCuadro;
	std::cout << "El area de un circulo con radio 2 es !\n";
	std::cout << resultadoCirculo;
	std::cout << "El area de un trangulo con base 2 y altura 2 es !\n";
	std::cout << resultadoTriangulo;
}

