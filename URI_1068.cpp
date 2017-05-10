#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
	int size;
	string line;

	while(getline(cin, line))
	{
		size = line.length();
		stack<char> s; 

		for (int i = 0; i < size; ++i)
		{
			if(line[i] == '(')
				s.push(i);
			if(line[i] == ')'){
				if(!s.empty()){
					s.pop();
				}else{
					s.push(i);
				}
			}

		}

		if(s.empty()){
			cout << "correct" << endl;
		}else{
			cout << "incorrect" << endl;
		}
	}

	return 0;
}