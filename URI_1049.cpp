#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string c;

	cin >> c;

	if(c == "vertebrado"){
		
		cin >> c;
		if(c == "ave"){

			cin >> c;
			if(c == "carnivoro"){
				cout << "aguia" << endl;
			}else{
				cout << "pomba" << endl;
			}
		}else{

			cin >> c;
			if(c == "onivoro"){
				cout << "homem" << endl;
			}else{
				cout << "vaca" << endl;
			}
		}
	}else{

		cin >> c;
		if(c == "inseto"){

			cin >> c;
			if(c == "hematofago"){
				cout << "pulga" << endl;
			}else{
				cout << "lagarta" << endl;
			}
		}else{

			cin >> c;
			if(c == "hematofago"){
				cout << "sanguessuga" << endl;	
			}else{
				cout << "minhoca" << endl;
			}
		}
	}
	return 0;
}