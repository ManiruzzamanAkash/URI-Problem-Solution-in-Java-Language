#include <iostream>
#include <string>
#include <vector>
using namespace std;

string create(string s) {
  int sz = s.size();

  if (sz == 1) {
    if (s == "1") return "11";
    else return s;
  } else {
    string r = "";

    while (sz > 9) {
      r += "9";
      r += s[0];
      sz -= 9;
    }

    r += ('0' + sz);
    r += s[0];

    if (sz == 1)
      r += "1";

    return r;
  }

  return "";
}

int main(int argc, char const *argv[]) {
  int i, a, b, sz;
  char c;
  string s, r, tmp;

  while(getline(cin, s)) {
    i = 0;
    vector<string> v;

    while(s[i] != '\0') {
      c = s[i];
      tmp = "";
      tmp += c;

      while(s[++i] == c)
        tmp += c;

      i--;
      v.push_back(create(tmp));
      i++;
    }

    r = "";
    for (a = 0, b = v.size(); a < b; a++) {
      sz = v[a].size();

      if (sz > 1) {
        if (sz == 2 && v[a][0] == '1') {
          r += v[a];
        } else {
          if (r != "") {
            cout << 1 << r << 1;
            r = "";
          }

          cout << v[a];
        }
      } else {
        r += v[a];
      }
    }

    if (r != "") {
      cout << "1" + r + "1";
    }

    cout << endl;
  }

  return 0;
}
