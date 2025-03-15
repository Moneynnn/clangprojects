#include <stdio.h>

/*int main() {
    printf("Hello Class \n");
    printf("I am sahil");
        return 0;
} */
// Variable is Int = integer, Float= Value in points, Char= a single value or alphabat %d use to print int, %f for float, %c for char element

int main() {
  int x= 15;
  int y= 5;
  float number = 8.88;
  char hiha = 'A';
  int sum= x * y;
  int add = x + y;
  int minus = x - y;
  int divide = x / y;
  printf("The multiple is %d, the addition is %d, the substraction is %d and the division is %d", sum, add, minus, divide);
  printf("%f, %c", number, hiha);
  return 0;
}