#include <iostream>
#include <cstring>

using namespace std;

int curr;

void foo(string prefixa, string infixa, int i, int j) {
  if(i <= j) {
    curr++;
    int pos = infixa.find(prefixa[curr]);
    foo(prefixa, infixa, i, pos - 1);
    foo(prefixa, infixa, pos + 1, j);
    cout << infixa[pos];
  }
}

int main(int argc, char const *argv[]) {
  string pre, in;

  while(cin >> pre >> in) {
    curr = -1;
    foo(pre, in, 0, pre.size() - 1);
    cout << "\n";
  }

  return 0;
}