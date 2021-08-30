//https://www.luogu.com.cn/problem/P5705 
#include<bits/stdc++.h>
using namespace std;
string a; 
int main() 
{
    cin>>a; 
    reverse(a.begin(),a.end());
    //STL反转字符串函数 
    //reverse(数组名.begin(),数组名.end()); 
    cout<<a; 
    return 0;
}
