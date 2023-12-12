#include <iostream>
#include <vector>
#include <cstdlib>

int main() {
  // initialize rand with constant seed for reproducibility
      std:srand(314159);

  // create a vector containing integers
      std::vector<int> vec;

      // Fill the vector with random number in [0,99]
      for (int i = 0; i <= 5; ++i) {
          vec.push_back(rand() % 100);
      }

      // print number of elements in the vector to screen
      std::cout << "vector size" << vec.size() << std::endl;

      // print all elements to screem
      std::cout << "Vector elements: ";
      for (auto &elem : vec) {
          std::cout << elem << " ";
      }
      std::cout << std::endl;

      return 0;
}
