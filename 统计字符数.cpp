#include <cstring>
#include <cstdio>
using namespace std;
int main(){
	char ch[100];
	int i, count = 0, word = 0;
	gets(ch);
	for ( i = 0; (ch[i] != '\0');i++)
	{
		if (ch[i] == ' ') { 
			word = 0; 
		}
		else if (word == 0)
		{
		word = 1;
		count++;
		}	
	}
	printf("%d\n", count);
	return 0;
}