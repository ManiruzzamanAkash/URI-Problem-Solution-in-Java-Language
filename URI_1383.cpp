#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, i, j, k, sum = 285, cnt = 0;
  int matriz[9][9];
  string s = "";

  cin >> n;
  while(n--) {
    for(i = 0; i < 9; i++)
      for(j = 0; j < 9; j++)
        cin >> matriz[i][j];

        int sl[9], sc[9], sm[3][3];

        for (i = 0; i < 9; i++)
          sl[i] = sc[i] = sm[i/3][i%3] = 0;

        for (i = 0; i < 9; i++) {
          for (j = 0; j < 9; j++) {
            k = matriz[i][j];
            k *= k;
            sl[i] += k;
            sc[j] += k;
            sm[i/3][j/3] += k;

            if (i == 8 && sc[j] != sum)
              break;
          }

          if (sl[i] != sum)
            break;
        }

        if(s == "")
          for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
              if (sm[i][j] != sum)
                s = "NAO";

        if(s == "")
          s  = "SIM";

        cnt++;
        cout << "Instancia " << cnt << endl << s << endl << endl;
        s = "";
    }

    return 0;
}
