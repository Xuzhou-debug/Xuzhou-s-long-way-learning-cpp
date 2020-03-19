#include <iostream>
using namespace std;

int main()
{
	int map[100][100] = {};
	int dir[4][2] ={{0,1},{1,0},{0,-1},{-1,0}};
	int n;
	cin >> n;
	int col, row;
	int cur = 0;
	row = 0;
	col = 0;
	for(int time = 1; time <= n*n; time++){
		map[row][col] = time;
		int new_row = row + dir[cur][0];
		int new_col = col + dir[cur][1];
		if (new_row < 0 || new_row >= n || new_col < 0 || new_col >= n|| map[new_row][new_col] != 0)
		{
			cur = (cur + 1) % 4;
			new_row = row + dir[cur][0];
			new_col = col + dir[cur][1];
		}
		row = row + dir[cur][0];
		col = col + dir[cur][1];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << map[i][j]<< " ";		
		}
		cout << endl;
	}
	return 0;
}			