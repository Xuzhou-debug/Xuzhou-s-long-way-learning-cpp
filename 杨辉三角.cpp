//
//  杨辉三角.cpp
//
//  Created by 许周 on 2020/2/12.
//  Copyright © 2020 许周. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a[200][200];
    memset(a,0,sizeof(a));
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        a[i][0]=1;
    }
    for(int i=1; i<n; i++){
        for(int j=1;j<=i; j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}
