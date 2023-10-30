/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file TopToBottom.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 30/10/2023
  * @brief Program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.
  *        
  *        
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59875_en
  */

#include <iostream>
#include <vector>

void PrintProgramPurpose() {
  std::cout << "Program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.\n"; 
  std::cout << "Enter two numbers: " << std::endl;
}

inline void GetUserInput(int& input) {
  std::cin >> input;
}


/*
 * The function takes two number, checks which is bigger, and cycles through all
 * the numbers between the two putting them in a vector for future use.
 */
std::vector<int> BetweenXAndY(int first_number, int second_number) {
  std::vector<int> result{};
  if (first_number > second_number) {
    result.reserve(first_number - second_number);
    while (second_number <= first_number) {
      result.emplace_back(first_number);
      first_number--;
    }
    return result;
  } else if (first_number < second_number) {
    result.reserve(second_number - first_number);
    while (first_number <= second_number) {
      result.emplace_back(second_number);
      second_number--;
    }
    return result;
  } else {
    // Just in case the two numbers are the same...
    return {first_number};
  }
}

void VectorSpitter(std::vector<int> vector_to_spit) {
  for (unsigned i = 0; i < vector_to_spit.size(); i++) {
    std::cout << vector_to_spit[i] << std::endl;
  }
}

int main() {
 // PrintProgramPurpose();
  int first_number{-1};
  int second_number{-1};
  GetUserInput(first_number);
  GetUserInput(second_number);
  VectorSpitter(BetweenXAndY(first_number, second_number));
  return 0;
}

