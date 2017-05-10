#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int pd[1000001];
int comp(const void * a, const void * b){return (*(int*)a - *(int*)b);}

int blocos(int arr[], int n, int m){

    if(m%arr[n-1] == 0) {
        return m/arr[n-1];
    }

    memset(pd, 999999, sizeof(pd));
    pd[0] = 0;

    for(int i = 0; i < n; i++) {
        int k = arr[i];

        for(int j = k; j <= m; j++) {
             pd[j] = min(pd[j], pd[j-k]+1);
        }
    }

    return pd[m];
}

int main(int argc, char const *argv[]) {
    int t, n, m;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d%d", &n, &m);
        int arr[n];

        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        qsort(arr, n, sizeof(int), comp);
        printf("%d\n", blocos(arr, n, m));
    }

    return 0;
}
