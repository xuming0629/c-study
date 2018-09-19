# include <iostream>

using namespace std;

float add(float x, float y); // 对函数 add 声明

int main()
{   float a, b, c;

    cout << "Please entar a, b:\n";
    cin >> a >> b;
    c = add(a, b);
    cout << "sum = " << c << endl;
    return 0;

}

float add(float x, float y)
{
    float z;
    z = x + y;
    return (z);
}


