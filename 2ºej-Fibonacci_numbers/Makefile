# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the Fibonacci_Numbers program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

Fibonacci_Numbers: Fibonacci_Numbers.o 
	$(CXX) $(FLAGS) $(FLAGS2) Fibonacci_Numbers Fibonacci_Numbers.o

Fibonacci_Numbers.o: Fibonacci_Numbers.cc
	$(CXX) $(FLAGS) $(FLAGS3) Fibonacci_Numbers.cc

clean:
	rm *.o Fibonacci_Numbers
