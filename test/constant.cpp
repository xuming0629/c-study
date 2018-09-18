# include <iostream>
using namespace std;

# define PRICE 30  // 注意这不是语句，末尾不需要加分号

int main()
{
    int num, total;
    num = 10;
    total = num * PRICE;
    cout << "total = "<< total << endl;
    return 0;
}
