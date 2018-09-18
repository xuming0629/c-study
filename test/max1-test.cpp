# include <iostream>

using namespace std;

int main()
{
    int max(int x, int y);//对 max 函数声明
    int a, b, c;
    cin >> a >> b;
    c = max(a, b); // 调用 max 函数
    cout << "max = "<< c << endl;
    return 0;
}

int max(int x, int y) // 定义 max 函数
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}
