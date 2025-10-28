#include <gtest/gtest.h>
#include "calculadora.h"

Calculadora calc;

TEST(CalculadoraTest, Soma) {
    EXPECT_DOUBLE_EQ(calc.somar(5, 3), 8);
}

TEST(CalculadoraTest, Subtracao) {
    EXPECT_DOUBLE_EQ(calc.subtrair(10, 4), 6);
}

TEST(CalculadoraTest, Multiplicacao) {
    EXPECT_DOUBLE_EQ(calc.multiplicar(2, 5), 10);
}

TEST(CalculadoraTest, Divisao) {
    EXPECT_DOUBLE_EQ(calc.dividir(8, 2), 4);
}

TEST(CalculadoraTest, DivisaoPorZero) {
    EXPECT_THROW(calc.dividir(10, 0), std::invalid_argument);
}

TEST(CalculadoraTest, Potencia) {
    EXPECT_DOUBLE_EQ(calc.potencia(2, 3), 8);
}

TEST(CalculadoraTest, RaizQuadrada) {
    EXPECT_DOUBLE_EQ(calc.raizQuadrada(9), 3);
}

TEST(CalculadoraTest, RaizDeNumeroNegativo) {
    EXPECT_THROW(calc.raizQuadrada(-4), std::invalid_argument);
}
