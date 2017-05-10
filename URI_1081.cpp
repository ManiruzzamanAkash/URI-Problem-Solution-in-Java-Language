#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

#define MAX 20
#define sc(a) scanf("%d", &a);
#define sc2(a, b) scanf("%d%d", &a, &b);

bool disc[MAX];
int graph[MAX][MAX];

void clean(int v) {
    int i, j;
    for (i = 0; i < v; i++) {
        for (j = 0; j < v; j++)
            graph[i][j] = 0;
        disc[i] = false;
    }
}

bool dfs(int v, int n, int s) {
    int i;
    bool path = false;

    disc[v] = true;

    for (i = 0; i < n; i++) {
        if (graph[v][i] == 1) {
            path = true;
            if (!disc[i]) {
                cout << string(s, ' ');
                printf("%d-%d pathR(G,%d)\n", v, i, i);
                dfs(i, n, s + 2);
            } else {
                cout << string(s, ' ');
                printf("%d-%d\n", v, i);
            }
        }
    }

    return path;
}

void dfs_runner(int v) {
    int i, ind = 0;

    while (1) {
        if (dfs(ind, v, 2))
            puts("");

        ind = -1;

        for (i = 0; i < v; i++) {
            if (!disc[i]) {
                ind = i;
                break;
            }
        }

        if (ind == -1)
            break;
    }
}

int main(int argc, char const *argv[]) {
    int n, v, e, o, d, c = 1;
    sc(n);

    while(n--) {
        sc2(v, e);
        clean(v);

        while(e--) {
            sc2(o, d);
            graph[o][d] = 1;
        }

        printf("Caso %d:\n", c++);
        dfs_runner(v);
    }

    return 0;
}