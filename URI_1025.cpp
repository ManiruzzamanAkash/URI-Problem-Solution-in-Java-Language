#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, q, x, cases = 1, sizeR;
	vector<int> m; vector<int> r;
	pair<vector<int>::iterator, vector<int>::iterator> it;

	while(scanf("%i %i", &n, &q) && (n || q))
	{
		m.clear(); r.clear();

		for (int i = 0; i < n; ++i)
		{
			scanf("%i", &x);
			m.push_back(x);
		}

		for (int i = 0; i < q; ++i)
		{
			scanf("%i", &x);
			r.push_back(x);
		}

		sort(m.begin(), m.end());	
		printf("CASE# %i:\n", cases);
		sizeR = r.size();

		for (int i = 0; i < sizeR; ++i)
		{
			if(binary_search(m.begin(), m.end(), r[i])){
				it = equal_range(m.begin(), m.end(), r[i]);
				printf("%i found at %li\n", r[i], (it.first - m.begin()) + 1);
				//std::cout <<resultados[a]<<" found at "<< (it.first - marmores.begin())+1<<endl;
			}else{
				printf("%i not found\n", r[i]);
				//cout <<resultados[a]<<" not found"<<endl;
			}
		}

		cases++;
	}

	return 0;
}