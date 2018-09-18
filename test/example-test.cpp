# include <iostream> // 预处理命令

using namespace std; 

class Student // 声明一个类，类名为 Student
{
    private: // 以下为类中的私有变量
        int num; // 私有变量 num
        int score; // 私有变量 score

    public: // 以下为类中的公有变量
        void setdata() // 定义公用的 setadat 函数
        {
            cin >> num; // 输入 num
            cin >> score; // 输入 score
        }

        void display() // 定义公用的 display 函数
        {
            cout << "num = " << num << endl; // 输出 num
            cout << "score = " << score << endl; // 输出 score
        };
}; // 类的声明结束

Student stu1, stu2; // 定义 stu1, stu2 为 Student 类的变量，称为对象.

int main() // 主函数首部
{
    stu1.setdata(); // 调用对象 stu1 的 setdata 函数
    stu2.setdata(); // 调用对象 stu2 的 setdata 函数


    stu1.display(); // 调用对象 stu1 的 display 函数
    stu2.display(); // 调用对象 stu2 的 display 函数

    return 0;
}
