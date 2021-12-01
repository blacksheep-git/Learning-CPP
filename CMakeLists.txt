cmake_minimum_required(VERSION 3.19)
project(lw)

set(CMAKE_CXX_STANDARD 14)

add_executable(lw Bank.cpp Customer.cpp Customer.hpp Account.cpp Account.hpp CheckingAccount.cpp CheckingAccount.hpp SavingAccount.cpp SavingAccount.hpp)