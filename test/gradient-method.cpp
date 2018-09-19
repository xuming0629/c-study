# include <iostream>
# include <cmath>

int Armijo(float x, float y,float rho, float sigma, float dx, float dy);//函数声明

float fun(float x, float y)
{
    return 100*(x*x - y)*(x*x - y) + (x - 1)*(x - 1);
}


void gfun(float x, float y, float& g1, float& g2)
{
    g1 = 400*x*(x-y) + 2*(x - 1);
    g2 = -200*(x*x-y);
}


float min(float a, float b)
{
    return (a < b) ? a:b;
}

int Armijo(float x, float y,float rho, float sigma, float dx, float dy)
{
    float x1, y1;
    float g1, g2;
    gfun(x, y, g1, g2);
    
    int i = 0;
    int imax = 100;

    while (i < imax)
    {
        x1 = x + pow(rho, i)*dx;
        y1 = y + pow(rho, i)*dy;

        if (fun(x1, y1) <= fun(x, y) + sigma*pow(rho, i)*(g1*dx + g2*dy))
            break;
        i = i + 1;            

    }
    return i;
}

int main(int argc, char * argv[])
{ 
    
    float x0, y0;
    float x, y;
    printf("Please input the inital value:x0, y0\n");
    scanf("%f, %f", &x0, &y0);
    printf("x=%f, y=%f\n", x0, y0);

    int max_iter = 50000;
    float g1, g2, s1, s2;

    x = x0;
    y = y0;

    float rho = 0.5f;
    float sigma = 0.2f;
    float EPS = 1e-4f;

    int i = 0;
    int j = 0;

    while(i < max_iter)
    {
        i = i + 1;
        printf("第%d次:\n", i);
        gfun(x, y, g1, g2);
        if (sqrt(pow(g1, 2) + pow(g2, 2)) < EPS)
            break;
        s1 = -g1;
        s2 = -g2;
        j = Armijo(x, y, rho, sigma,s1,s2);
        printf("搜索次数:%d\t", j);
        printf("最佳步长:%f\n", pow(rho, j));

        x = x + pow(rho, j)*s1;
        y = x + pow(rho, j)*s2;
    }
    printf("最优解是:x=%f, y=%f\n", x, y);
    return 0;

}


