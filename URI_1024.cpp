#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    int n, size;
    string s;
     
    cin >> n;
     
    for(int i = 0; i <= n; ++i)
    {
        getline(cin, s);
        if(i == 0)
            continue;
             
        size = s.length();
        vector<char> v(size);
         
        for(int j = 0; j < size; ++j){v[j] = s[j];}
         
        for(int j = 0; j < size; ++j)
        {
            if((v[j] >= 'a' && v[j] <= 'z') || (v[j] >= 'A' && v[j] <= 'Z'))
                v[j] = v[j] + 3;
        }
         
        reverse(v.begin(), v.begin() + size);
         
        for(int j = (size/2); j < size; ++j)
        {
            //if(v[j] != ' ')
                v[j] = v[j] - 1;
        }
         
        for(int j = 0; j < (size/2); ++j){cout << v[j];}
        for(int j = (size/2); j < size; ++j){
            //if(v[j] != ' ')
                cout << v[j];
        }
         
        cout << endl;
    }
     
    return 0;
}