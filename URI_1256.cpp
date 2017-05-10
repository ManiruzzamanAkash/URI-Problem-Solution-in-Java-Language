#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int i, x, n, testCases, cut, tam;

  cin >> testCases;
  for (x = 0; x < testCases; x++) {
    if (x)
      cout << endl;

    cin >> cut >> tam;
    vector<int> hashv[cut];
    vector<int>::iterator it;

    for (i = 0; i < tam; i++) {
      cin >> n;
      hashv[n % cut].push_back(n);
    }

    for (i = 0; i < cut; i++) {
      cout << i;
      for (it = hashv[i].begin(); it != hashv[i].end(); it++) {
        cout << " -> " << *it;
      }

      cout << " -> \\" << endl;
    }
  }

  return 0;
}