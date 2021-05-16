#include <stdio.h>
#include <string.h>


int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

  int i2;
  double d2;
  char ch[20000];
   scanf("%d %lf %[^\n]", &i2, &d2, &ch);

    printf("%d\n%.1lf\n%s%s", i2+i, d2+d,s, ch);

    return 0;
}
