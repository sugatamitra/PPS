/* Sugata mitra team 
code for addition of matrix*/
#include <stdio.h>
int main() {
  int a[10][10], b[10][10], c[10][10], n, i, j, k;

  printf("Enter the value of N: ");
  scanf("%d", &n);
  printf("Enter the elements of Matrix-A: \n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the elements of Matrix-B: \n");

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  printf("The Sum of the two matrices is: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      c[i][j] = a[i][j] + b[i][j];
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
