# include <iostream>

using namespace std;

int main()
{
    int a = 100, b = 10;
    int * pointer1, * pointer2;

    pointer1 = &a;
    pointer2 = &b;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "*pointer1 = " << * pointer1 << ", *pointer2 = " << * pointer2 << endl;
    return 0;
    

}
