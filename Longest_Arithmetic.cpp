#include <stdio.h>

void solv(int c);

int main() {
  int TC;
  scanf("%d\n", &TC);
  for (int i = 0; i < TC; ++i)
    solv(i + 1);
}

void solv(int c) {
  printf("Case #%d: ", c);
  long N;
  scanf("%ld\n", &N);

  long x,y,d;
  scanf("%ld", &x);
  scanf("%ld", &y);
  d = y - x;
  long answer = 2,
       current = 2;

  for (long i = 0; i < N - 2; ++i) {
    x = y;
    scanf("%ld", &y);

    if (d == y - x)
      ++current;
    else {
      current = 2;
      d = y - x;
    }

    if (current > answer)
      answer = current;
  }

  printf("%ld\n", answer);
}
