#include <iostream>
using namespace std;

void printInOrder(int a, int b, int c)
{
    int min, mid, max;
    if(a < b && a < c){
        min = a;
        if(b < c){
            mid = b;
            max = c;
        }else{
            mid = c;
            max = b;
        }
    }else if(b < a && b < c){
        min = b;
        if(a < c){
            mid = a;
            max = c;
        }else{
            mid = c;
            max = a;
        }
    }else{
        min = c;
        if(a < b){
            mid = a;
            max = b;
        }else{
            mid = b;
            max = a;
        }
    }

    cout << min << endl << mid << endl << max << endl << endl;
        
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    printInOrder(a, b, c);

    cout << a << endl << b << endl << c << endl;

    return 0;
}