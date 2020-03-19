#include<iostream>

#include <string>

using namespace std;
int main()
{
	string a;
	string find;
	getline(cin, a);
	getline(cin, find);
	if (a.find(find)+1 == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << a.find(find)+1 << endl;
	}
	return 0;
}