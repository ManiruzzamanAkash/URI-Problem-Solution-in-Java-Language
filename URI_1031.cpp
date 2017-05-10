#include <cstdio>
#include <vector>

#define PB push_back
#define SC1(a) scanf("%d", &a)
#define REP(i, a, b) for (int i = (a); i <= (b); ++i)

using namespace std;

typedef vector<int> VI;

bool crisis(int n, int k)
{
	int p = 0;
	VI v;

	REP(i, 1, n)
		v.PB(i);

	if(v.size() > 1){
		do{
			v.erase(v.begin() + p);
			p = (p - 1 + k) % v.size();
		}while(v.size() > 1);
	}

	return (v[0] == 13);
}

int main(int argc, char const *argv[])
{
	int n, r;

	while(SC1(n) && n)
	{
		r = 1;
		while(!crisis(n, r))
			r++;

		printf("%d\n", r);
	}

	return 0;
}