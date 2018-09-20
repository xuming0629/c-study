# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

double f(double);//函数声明
double xpoint(double, double);
double root(double, double);
int main()
{   double x1, x2, f1, f2, x;
    do{
        cout << "Input x1, x2\n";
        cin >> x1 >> x2;
        f1 = f(x1);
        f2 = f(x2);
        }while (f1*f2 >= 0);
    x = root(x1, x2);
    cout << setiosflags(ios::fixed) << setprecision(7);

    cout << "A root of equation is " << x << endl;
    return 0;
}


double f(double x)
{
    double y;
    y = x*x*x - 5*x*x + 16*x -80;
    return y;
}

double xpoint(double x1, double x2)
{
    double y;
    y = (x1*f(x2) - x2*f(x1))/(f(x2) -f(x1));
    return y;
}

double root(double x1, double x2)
{
    double x, y, y1;
    do
    {
        x = xpoint(x1, x2);
        y = f(x);
        if (y * y1 > 0)
        {
            y1 = y;
            x1 = x;
        }
        else
        {
            x2 = x;
        }
    }while (fabs(y) >= 0.00001);
    return x;
}
