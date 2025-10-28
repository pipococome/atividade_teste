# CMake generated Testfile for 
# Source directory: C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste
# Build directory: C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(CalculadoraTest "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/build/Debug/tests.exe")
  set_tests_properties(CalculadoraTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;23;add_test;C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(CalculadoraTest "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/build/Release/tests.exe")
  set_tests_properties(CalculadoraTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;23;add_test;C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(CalculadoraTest "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/build/MinSizeRel/tests.exe")
  set_tests_properties(CalculadoraTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;23;add_test;C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(CalculadoraTest "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/build/RelWithDebInfo/tests.exe")
  set_tests_properties(CalculadoraTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;23;add_test;C:/Users/GERSON BARBIERI/Documents/GitHub/atividade_teste/CMakeLists.txt;0;")
else()
  add_test(CalculadoraTest NOT_AVAILABLE)
endif()
subdirs("googletest")
