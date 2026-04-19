//SequentialSearch.cpp

# include "SequentialSearch.h"

#include <iostream>
#include <cstdlib>
#include <ctime>


SequentialSearch::SequentialSearch() {

  srand(time(NULL));

  for (int i=0; i < 16; i++)
    array.push_back(1 + rand() % 20)

  
  arraySize = sizeof(array) / sizeof(array[0]);
}

SequentialSearch::~SequentialSearch() {}

void SequentialSearch::display() {
  std::cout << "Array: ";

  for (int i=0; i < arraySize; i++)
    std::cout << array[i] << " ";
}
