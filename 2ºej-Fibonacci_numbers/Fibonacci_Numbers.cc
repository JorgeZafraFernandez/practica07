/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Fibonacci_Numbers.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 27/10/2023
  * @brief Program that prints the n first numbers of the Fibonacci series, n
  *        being the given number.
  *        
  *        
  * @bug There are no known bugs
  * @see https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit
  */

#include <iostream>
#include <vector>
#include <string>


void PrintProgramPurpose() {
  std::cout << "Program that prints the n first numbers of the Fibonacci series, n being the given number.\n";
  std::cout << "Enter a number of iterations: ";
}

inline void GetUserInput(auto& type) {
  std::cin >> type;
}

/*
 * Must check, always check. Never leave it to your users inteligence, because it may be lacking.
 */
bool CheckCorrectParameters(int parameter) {
  if (parameter < 0) {
    return false;
  } else {
    return true;
  }
}

/*
 * This function takes a number of iterations and makes a vector containing the
 * fibonacci series up to that number.
 * Asumes no-nonsensical input.
 */
std::vector<int> FibonacciCalculator(int iterations) {
  switch (iterations){
    case 1:
    return {0};
    case 2:
    return {0, 1};
  }
  std::vector<int> result{0,1};
  result.reserve(iterations);
  for (int i = 2; i <= iterations - 1; i++) {
    result.emplace_back(result[i - 1] + result[i - 2]);
  }
  return result;
}

/* 
 * This funtion takes a vector and turns it into a string.
 */
std::string VectorSpitter(const std::vector<int>& vector_to_spit) {
  std::string result = "";
  if (vector_to_spit.size() == 0) {
    return result;
  }
  for (unsigned i = 0; i < vector_to_spit.size() - 1; i++) {
    result += std::to_string(vector_to_spit[i]) + " ";
  }
  result += std::to_string(vector_to_spit[vector_to_spit.size() - 1]);
  return result;
}

int main() {
 // PrintProgramPurpose();
  int iterations{-1};
  GetUserInput(iterations);
  if (!CheckCorrectParameters(iterations)) {
    return 1;
  } 
  std::cout << VectorSpitter(FibonacciCalculator(iterations)) << std::endl;
  return 0;
}
