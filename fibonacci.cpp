#include<iostream>
#include<list>

std::list <int> fibonacci(int x) {
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;
    std::list <int> list1;
    list1.push_back(num1);
    list1.push_back(num2);
    int z = 0;
    while (z <= x) {
        num3 = num2 + num1;
        num1 = num2;
        num2 = num3;
        list1.push_back(num3);
        z = z + 1;
      }
    return list1;
  }



int main() {
  std::list <int> lis = fibonacci(5);
  for (auto i : lis) {
    std::cout << i << ' ';
  }
}
