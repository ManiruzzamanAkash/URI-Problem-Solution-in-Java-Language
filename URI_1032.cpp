#include <cstdio>
#include <cstring>
#include <vector>

#define PB push_back
#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define REP(i, a, b) for (int i = (a); i <= (b); ++i)

using namespace std;

typedef long long LL;
typedef vector<int> VI;

bool mark[100015];
VI v1, v2;

void fillarr()
{
	mark[0] = mark[1] = 1;

	REP(i, 0, 100015)
	{
		if(mark[i]) 
			continue;

		v1.PB(i);

		for(LL j = LL(i)*i ; j > 0 && j < 100015; j += i)
			mark[j] = 1;
	}
}

int main(int argc, char const *argv[]) 
{
	int n, k, id,  p;

	fillarr();

	while(SC1(n) && n)
	{
		id = 0;
		v2.clear();

		REP(i, 1, n) 
			v2.PB(i);

		p  = (v1[id] - 1) % v2.size();

		if(v2.size() > 1){ 
			do{
				v2.erase(v2.begin() + p);
				id++;
				p = (p - 1 + v1[id]) % v2.size();
			} while(v2.size() > 1);
		}

		p = v2[0];
		printf("%d\n", p);
	}
	
	return 0;
}