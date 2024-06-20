#include "iostream"

using namespace std;

int sort(int a[]) {

  int n = 8;
  for (int i = 0; i < n - 1; i++) {
    int min_inx = i;
    for (int j = i + 1; j < n; j++) {
      if (a[min_inx] > a[j]) {
        min_inx = j;
      }
    }
    int temp = a[i];
    a[i] = a[min_inx];
    a[min_inx] = temp;
  }
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << ",";
  }
  return 0;
}

int main() {
  int a[8] = {1, 2, 4, 11, 55, 24, 4, 33};
  sort(a);
  return 0;
}