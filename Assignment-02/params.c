#include <stdio.h>

int i = 0;
int a[2] = {1, 1};

void init() {
  i=0; a[0]=1; a[1]=1;
}

// Pass-by-Value (Sample Example)
void p(int x, int y) {
  x++; i++; y++;
}

// 1. Pass-by-Reference
void pbr(int *x, int *y) {
  (*x)++; i++; (*y)++;
}

// 2. Pass-by-value-result (call)
void pbvr_c(int x, int y, int *xp, int *yp) {
  x++; i++; y++;
  *xp = x;
  *yp = y;
}

// 3. Pass-by-value-result (return)
void pbvr_r(int x, int y, int *xIndex, int *yIndex, int *arr) {
  x++; i++; y++;
  arr[*xIndex] = x;
  arr[*yIndex] = y;
}

// 4. Pass-by-name
void pbn(int *xIndex, int *yIndex, int *arr) {
  arr[*xIndex]++; i++; arr[*yIndex]++;
}


main() {
  // 0. Pass-by-Value (Sample Example)
  // 출력 결과: 1 1
  printf("0.Pass-by-Value\n");
  p(a[i], a[i]);
  printf("%d %d\n\n", a[0], a[1]);

  // 1. Pass-by-Reference
  // 출력 결과: 3 1
  init();
  printf("1.Pass-by-Reference\n");
  pbr(&a[i], &a[i]);
  printf("%d %d\n\n", a[0], a[1]);

  // 2. Pass-by-value-result (call)
  // 출력 결과: 2 1
  init();
  printf("2.Pass-by-value-result (call)\n");
  pbvr_c(a[i], a[i], &a[i], &a[i]);
  printf("%d %d\n\n", a[0], a[1]);

  // 3. Pass-by-value-result (return)
  // 출력 결과: 1 2
  init();
  printf("3.Pass-by-value-result (return)\n");
  pbvr_r(a[i], a[i], &i, &i, a);
  printf("%d %d\n\n", a[0], a[1]);

  // 4. Pass-by-name
  // 출력 결과: 2 2
  init();
  printf("4.Pass-by-name\n");
  pbn(&i, &i, a);
  printf("%d %d\n\n", a[0], a[1]);
}