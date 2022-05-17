cmake_minimum_required(VERSION 3.1.0)

project(TEST)

enable_testing()
add_executable(testit testit.cxx)
add_test(testit testit)
set_tests_properties(testit PROPERTIES ENVIRONMENT "TESTENV=VALUE")
