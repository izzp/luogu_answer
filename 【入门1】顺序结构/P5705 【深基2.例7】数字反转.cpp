//https://www.luogu.com.cn/problem/P5705 
#include<bits/stdc++.h>
using namespace std;
string a; 
int main() 
{
    cin>>a; 
    reverse(a.begin(),a.end());
    //STL��ת�ַ������� 
    //reverse(������.begin(),������.end()); 
    cout<<a; 
    return 0;
}
