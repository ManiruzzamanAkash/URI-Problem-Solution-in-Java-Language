#include <stdio.h>
#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {
  int N, K, M, a, b, c, i, e, f;
  int v[1000];

  while(cin >> N >> K >> M && N) {
    e = 0, f = N - 1;

    for(i = 0;i < N; i++)
      v[i] = i + 1;

    c = 0;

    while(c < N) {
      i = K;
      while (i > 0){
        if(v[e] > 0) i--;
        if(i == 0) a = e;
        e = (e + 1) % N;
      }

      i = M;
      while(i > 0) {
        if(v[f] > 0) i--;
        if(i == 0) b = f;
        f = (f + N - 1) % N;
      }

      if(c > 0)
        cout <<",";

      if(a != b) {
        printf("%3d%3d", v[a], v[b]);
        c += 2;
      } else {
        printf("%3d", v[a]);
        c++;
      }

      v[a] = v[b] = 0;
    }

    cout << '\n';
  }

  return 0;
}