// Copyright 2021 NNTU-CS
#include <iostream>

int cbinsearch(int *arr, int size, int value) {
  int kol = 0;
  for (int i = 0; i < size; i++) {
      if (arr[i] == value) {
          kol++;
      } else { continue; }
  }
  return kol;
  return 0; // если ничего не найдено
}

int main() {
    int size = 0;
    std::cin >> size;
    int *arr = new int[size];
    int value = 0;
    std::cin >> value;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
  std::cout << cbinsearch(arr, size, value) << std::endl;
  return 0;
}
