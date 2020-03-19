#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main() {
	string a;
	cin >> a;
	int cur = 0;
	while(cur < a.length()) {
		int count = 0;
		char c = a[cur];
		while(c == a[cur] && cur< a.length()) {
			count++;
			cur++;
		}
		cout << c;
		if(count > 1)
			cout << count;
	}
} 