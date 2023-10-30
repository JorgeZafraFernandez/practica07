/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file leap-year.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 28/10/2023
  * @brief Program that checks whether year is a leap year or not, outputting YES if it is, and NO if it isn't.
  *        
  *        
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
  */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "Program that checks whether year is a leap year or not, outputting YES if it is, and NO if it isn't.\n"; 
  std::cout << "Enter a year: ";
}

inline void GetUserInput(auto& input) {
  std::cin >> input;
}

bool CheckCorrectParameters(int parameter) {
  if (parameter < 0) {
    return false;
  } else {
    return true;
  }
}

std::string IsLeapYear(int year) {
  int last_two_digits{year % 100};
  if ((year % 4 == 0 && last_two_digits != 00) || (last_two_digits == 00 && (year / 100) % 4 == 0)) {
    return "YES";
  }
  return "NO";
}

int main() {
 // PrintProgramPurpose();
  int year{-1};
  GetUserInput(year);
  if (!CheckCorrectParameters(year)) {
    return 1;
  }
  std::cout << IsLeapYear(year) << std::endl;
  return 0;
}

