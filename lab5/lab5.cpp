
#include <stdio.h>

int main()
{
  int arr[10] = { 5, -3, 0, 7, -8, 12, -1, 4, -6, 9 };
  int a1 = 5; //желаемая оценка
  int b = 2;  //НЕжелаемая оценка
  int y;
  y = a1 + b;
  printf("a = %d", a1);
  printf("\nb = %d", b);
  printf("\na + b = %d", y);

  printf("\nОтрицательные числа в массиве:");
  for (int i = 0; i < 10; i++) {
    if (arr[i] < 0) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n a + b + y = %d", a1+b+y);
}
