# include <iostream>

using namespace std;

int main()
{
    int a[11];
    int i, j, t;

    cout << "Input 10 number:\n" << endl;

    for (i=1;i<11;i++)
    {
        cin >> a[i];
    cout << endl;
    }

    for (j=1; j<9;j++)
        for (i=1;i<=10-j;i++)
            if (a[i] > a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }

    cout << "The sorted number:\n" << endl;

    for (i=1; i<11;i++)
        cout << a[i] << " ";
    cout <<endl;
    return 0;


}
