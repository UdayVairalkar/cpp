#include<iostream>
class base
{
    public:
    int a;
    public:
    void getdata(){
        std::cout<<"enter the value of a ";
        std::cin>>a;

    }
};
class derived : public base{
    public :
    void display()
    {
        std::cout<<"the value of a is "<<a;

    }
};
int main()
{
    derived d;
    d.display();
    return 0;
}

