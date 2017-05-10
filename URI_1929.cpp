#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j, k, v[4];
  bool b = false;
  scanf("%d%d%d%d", &v[0], &v[1], &v[2], &v[3]);
  for(i = 0; i < 4; i++)
    for(j = i + 1; j < 4; j++)
      for(k = j + 1; k < 4; k++)
        if (v[i] + v[j] > v[k] && v[k] + v[j] > v[i] && v[k] + v[i] > v[j])
          b = true;
  (b) ? puts("S") : puts("N");
  return 0;
}
