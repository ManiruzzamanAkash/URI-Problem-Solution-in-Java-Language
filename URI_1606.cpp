#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int i, k, n, w, p = 0, sz;
  int arr[100010];
  vector<int> v;

  while(scanf("%d%d", &k, &n) == 2) {
    v.clear();
    p++;
    for(i = 0; i < k; i++) {
      scanf("%d", &w);
      if(arr[w] != p) {
        arr[w] = p;
        v.push_back(w);
      }
    }
    printf("%d", v[0]);
    sz = v.size();
    for(i = 1; i < sz; i++)
      printf(" %d", v[i]);
    printf("\n");
  }

  return 0;
}