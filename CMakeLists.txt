cmake_minimum_required(VERSION 3.15)
project(AtividadeTeste VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Força compatibilidade de runtime
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# GoogleTest
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
include_directories(include)

# Código principal (calculadora interativa)
add_executable(main_app src/main.cpp src/calculadora.cpp)

# Testes automáticos
add_executable(tests tests/calculadora_test.cpp src/calculadora.cpp)
target_link_libraries(tests PRIVATE gtest gtest_main)

enable_testing()
add_test(NAME CalculadoraTest COMMAND tests)
