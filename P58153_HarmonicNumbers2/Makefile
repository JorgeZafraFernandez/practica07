# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jorge Zafra Fernández
# @date 20/10/2023
# @brief A Make File for the HarmonicNumbers2 program
# 

CXX = g++
FLAGS = -Wall -Wextra -std=c++17
FLAGS2 = -o 
FLAGS3 = -c

HarmonicNumbers2: HarmonicNumbers2.o 
	$(CXX) $(FLAGS) $(FLAGS2) HarmonicNumbers2 HarmonicNumbers2.o

HarmonicNumbers2.o: HarmonicNumbers2.cc
	$(CXX) $(FLAGS) $(FLAGS3) HarmonicNumbers2.cc

clean:
	rm *.o HarmonicNumbers2
