#include <cstdio>
#include <cstring>
#include <vector>
#include <set>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define sc2(a,b) scanf("%d %d", &a, &b)
#define INF 0x3f3f3f3f
#define mst(a, b) memset(a, b, sizeof a)
#define fr(i,a,b) for(int i=a; i < b; i++)

typedef set<int> si;

int l, k, w, n, m;
int arr[10005];
int arr_[10005];
si ns;
si::reverse_iterator it;

int check(int k, int sum, bool b) {

	it = ns.rbegin();
	int d, n, cnt = 0, i = ns.size()-1;

	while(k && it != ns.rend()) {
		n = *it;
		d = sum-n;
		
		if(b) {
			if(arr[n] <= 0 || d < 0 || (d==n ? (arr[d]-1) <= 0 : arr[d] <= 0)) {
				it++; continue;
			}
		}
		if(!b) {
			if(arr_[n] <= 0 || d < 0 || (d==n ?  (arr_[d]-1) <= 0 : arr_[d] <= 0)) {
				it++; continue;
			}
		}

		if(b) {
			arr[d]--, arr[n]--;
		}else {
			arr_[d]--, arr_[n]--;
		}

		cnt+= (d ? 2 : 1);
		k--;
	}

	if(k) return INF;
	return cnt;
}

int main (int argc, char const* argv[]) {

	while(sc2(n,m) && (n || m)) {
		mst(arr, 0); mst(arr_, 0);
		arr[0] = arr_[0] = INF;
		ns.clear();
		sc2(l,k);

		fr(i,0,k) {
			sc1(w);
			ns.insert(w);
			arr[w]++, arr_[w]++;
		}

		int r = INF;

		if((n*100)%l == 0){
			r = min(r, check((n*100)/l, m, 1));
		}

		if((m*100)%l == 0){
			r = min(r, check((m*100)/l, n, 0));
		}

		if(r >= INF || r < 0) puts("impossivel");
		else printf("%d\n", r);
	}

	return 0;
}
