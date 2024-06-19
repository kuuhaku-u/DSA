#include <iostream>

using namespace std;

int search(int arr[], int target) {

  for (int i = 0; i < 10; i++) {
    if (arr[i] == target) {
      std::cout << "Found";
      return 1;
    }
  }
  std::cout << "Not Found";
  return 0;
}

int main() {

  int a[10] = {1, 2, 14, 5, 6, 2, 4, 2, 10, 99};

  search(a, 99);

  return 1;
}
