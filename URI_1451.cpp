#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[]) {
  int i;
  string line;
  list<char> res;
  list<char>::iterator it;

  while(cin >> line) {
    res.clear();
    it = res.begin();

    for(i = 0; line[i] != '\0'; i++) {
      if(line[i] == ']') {
        it = res.end();
      } else if(line[i] == '[') {
        it = res.begin();
      }

      if(line[i] != '[' && line[i] != ']') {
        res.insert(it, line[i]);
      }
    }

    for(it = res.begin(); it != res.end(); it++)
      cout << *it;
    cout << '\n';
  }

  return 0;
}