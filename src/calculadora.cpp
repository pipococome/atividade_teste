#include "calculadora.h"
#include <cmath>

double Calculadora::somar(double a, double b) {
    return a + b;
}

double Calculadora::subtrair(double a, double b) {
    return a - b;
}

double Calculadora::multiplicar(double a, double b) {
    return a * b;
}

double Calculadora::dividir(double a, double b) {
    if (b == 0)
        throw std::invalid_argument("Divisão por zero não é permitida!");
    return a / b;
}

double Calculadora::potencia(double base, int expoente) {
    return pow(base, expoente);
}

double Calculadora::raizQuadrada(double x) {
    if (x < 0)
        throw std::invalid_argument("Não existe raiz quadrada real de número negativo!");
    return sqrt(x);
}
