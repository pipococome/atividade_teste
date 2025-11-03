# Projeto de Testes com GoogleTest (GTest)

## 🧠 Descricao Geral

Este projeto demonstra o uso do **GoogleTest (GTest)** para realizar **testes unitarios** em C++.  
O objetivo e garantir que cada parte do codigo funcione corretamente, de forma isolada e automatizada.

O projeto inclui:
- Um aplicativo principal (`main_app`)
- Um conjunto de testes (`tests`)
- As bibliotecas estaticas do GoogleTest (`gtest`, `gtest_main`, `gmock`, `gmock_main`)

---

## ⚙️ Estrutura do Projeto

AtividadeTeste/
├── gtest/ # Biblioteca GoogleTest (static)

├── gmock/ # Biblioteca GoogleMock (static)

├── main_app/ # Codigo principal da aplicacao

├── tests/ # Arquivos de teste unitario

├── CMakeLists.txt # Configuracao de build via CMake

└── README.md


---

## 🚀 Funcionamento da Parte Pratica

1. **Codigo principal (`main_app`)**
   - Contem as funcoes e classes que serao testadas.
   - Exemplo: uma classe `Calculadora` com metodos `somar`, `subtrair`, etc.

2. **Testes (`tests`)**
   - Cada teste verifica se uma funcao do codigo principal se comporta como esperado.
   - Os testes usam macros do GTest, como `TEST`, `EXPECT_EQ`, `ASSERT_TRUE`, etc.

   Exemplo:
   ```cpp
   #include <gtest/gtest.h>
   #include "calculadora.h"

   TEST(CalculadoraTest, Soma) {
       Calculadora c;
       EXPECT_EQ(c.somar(2, 3), 5);
   }

   TEST(CalculadoraTest, Subtracao) {
       Calculadora c;
       EXPECT_EQ(c.subtrair(5, 2), 3);
   }
---
Execucao dos testes

 - O executavel tests e gerado pelo CMake.
 - Ao rodar, ele executa automaticamente todos os testes definidos com TEST(...).
 - O GTest mostra no terminal quais testes passaram e quais falharam.
 - Exemplo de saida:

[==========] Running 2 tests from 1 test suite.

[----------] Global test environment set-up.

[ RUN      ] CalculadoraTest.Soma

[       OK ] CalculadoraTest.Soma (0 ms)

[ RUN      ] CalculadoraTest.Subtracao

[       OK ] CalculadoraTest.Subtracao (0 ms)

[----------] Global test environment tear-down

[==========] 2 tests from 1 test suite ran. (0 ms total)

[  PASSED  ] 2 tests.

---
🧩 Como Obter e Configurar o GoogleTest

Existem tres formas de adicionar o GTest ao projeto:

🔹 1. Usando o CMake FetchContent (recomendado)

No seu CMakeLists.txt, adicione:

include(FetchContent)

FetchContent_Declare(

  googletest
  
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tests tests.cpp)

target_link_libraries(tests gtest_main)

include(GoogleTest)

gtest_discover_tests(tests)

---
Depois, execute:

cmake -S . -B build

cmake --build build

cd build && ctest

---
🔹 2. Instalando manualmente via Git

git clone https://github.com/google/googletest.git

cd googletest

cmake -S . -B build

cmake --build build

---
⚠️ Dicas Importantes

 - Cada teste deve ser independente dos outros.
 - Evite variaveis globais e dados compartilhados.
 - Use Fixtures (TEST_F) se precisar configurar objetos antes de cada teste.
 - Utilize o comando ctest para rodar todos os testes automaticamente.

 📚 Referencias

 - GoogleTest oficial: https://github.com/google/googletest
 - Documentacao: https://google.github.io/googletest/
