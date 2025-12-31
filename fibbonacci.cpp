#include<iostream>
// in this first number is addded into second number like 0+1=1 then 1+1=2 then 1+2=3 then 2+3=5 and so on
// this is the series of fibbonacci
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