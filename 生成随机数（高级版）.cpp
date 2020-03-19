#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//这是一个生成随机数的简单程序
int main()
{
    srand((int)time(0));  // 通过时间产生随机种子把0换成NULL也行
     cout << rand()%2<< endl;
    return 0;
}