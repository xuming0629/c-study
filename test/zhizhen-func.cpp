# include <iostream>

using namespace std;

int main()
{
    void swap(int *p1, int *p2);
    int *pointer1, *pointer2, a, b;

    cin >> a >> b;

    pointer1 = &a;
    pointer2 = &b;

    if (a < b)
        swap(pointer1, pointer2);

    cout << "max = " << a << ", min = " << b << endl;
    return 0;
}


void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
