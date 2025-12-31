#include <iostream>

class cond{
    
    int n ;
    public:
    void getdata()
    {
    std::cout<<"Enter a number: ";
    std::cin>>n;
    if (n%=2)
    {
        std::cout<<"Number is odd";
    }
    else
    {
        std::cout<<"Number is even";
    }
    }
};
int main ()
{
    cond c ;
    return 0;
}