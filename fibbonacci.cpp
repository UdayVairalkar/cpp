#include<iostream>

class fibbinacci
{
    int n;
    public:
    fibbinacci(int num)
    {
        n = num;
        int a = 0, b = 1, c;
        for(int i=0;i<n;i++)
        {
            std::cout<<a<<" ";
            c = a+b;
            a = b;
            b = c;
        }
    }
};
int main()
{
    int num;
    std::cin>>num;
    fibbinacci f(num);
    return 0;
}