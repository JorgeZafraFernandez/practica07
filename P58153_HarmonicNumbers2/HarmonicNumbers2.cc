/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file HarmonicNumbers2.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 30/10/2023
  * @brief Program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
  *        
  *        
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <iomanip>

void PrintProgramPurpose() {
  std::cout << "Program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.\n"; 
  std::cout << "Enter sets of two numbers: ";
}

bool CheckCorrectParameters(int first_number, int second_number) {
  if (first_number < 0 || second_number < 0) {
    return false;
  } else {
    return true;
  }
}

double HarmonicCalculator(const int upper_limit) {
  double result{0};
  for (double i = 1; i <= upper_limit; i++) {
    result += 1/i;
  } 
  return result;
}


double HarmonicSubtraction(int first_number, int second_number) {
  return HarmonicCalculator(first_number) - HarmonicCalculator(second_number);
}

int main() {
 // PrintProgramPurpose();
  int first_number{-1};
  int second_number{-1};
  while (std::cin >> first_number) {
    std::cin >> second_number;
    if (!CheckCorrectParameters(first_number, second_number)) {
      return 1;
    }
    std::cout << std::fixed << std::setprecision(10) << HarmonicSubtraction(first_number, second_number) << std::endl;
  }
  return 0;
}

