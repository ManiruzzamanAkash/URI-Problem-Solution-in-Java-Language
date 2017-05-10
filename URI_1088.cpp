#include <cstdio>
#include <cstring>
#include <vector>

#define PB push_back
#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef vector<int> vi;

vi v;
int counter = 0;

vi merge(vi a, vi b)
{
	int i = 0, j = 0, s1 = a.size(), s2 = b.size();
	vi r;
	
	while(i  < s1 && j < s2)
	{
		if(a[i] < b[j]){
			r.PB(a[i]);
			i++;
		}else{
			r.PB(b[j]);
			counter += (int)(a.size()) - i;
			j++;
		}
	}
	
	while( i < s1)
	{
		r.PB(a[i]); 
		i++;
	}

	while(j < s2)
	{
		r.PB(b[j]); 
		j++;
	}

	return r;
}

vi mergeSort(int left, int right)
{
	vi r;
	int middle = (left + right)/2;
	
	if(left + 1 >= right){
		r.PB(v[left]);
		return r;
	}
	
	vi a = mergeSort(left, middle);
	vi b = mergeSort(middle, right);
	r = merge(a,b);
	
	return r;
}

int main (int argc, char *argv[])
{
	int n, x;
	
	while(SC1(n) && n)
	{
		counter = 0; 
		v.clear();
		
		FOR(i, n)
		{
			SC1(x); 
			v.PB(x);
		}
		
		mergeSort(0,n);
		
		if(counter % 2) puts("Marcelo");
		else puts("Carlos");
	}
	
	return 0;
}