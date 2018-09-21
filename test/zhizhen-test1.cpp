# include <iostream>

using namespace std;

int main()
{
    int a, b;
    int * pointer1, * pointer2;

    a = 100, b = 200;

    pointer1 = &a;
    pointer2 = &b;
    
    cout << a << " " << b << endl;
    cout << * pointer1 << " " << * pointer2 << endl;
    return 0;
}
