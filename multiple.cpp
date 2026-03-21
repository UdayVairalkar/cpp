//here we started
#include<iostream>
class class1
{
    public:
    int roll;
    void getdata()
    {
        std::cout<<"Enter roll number and enrollment number";
        std::cin>>roll;
    }
};
class class2 : class1
{
    public:
    int marks;
    char name[40];
    void getdata2()
    {
        std::cout<<"the roll number and enrollment number of the student is"<<roll;
   
    }
};
class uday : protected  class2
{
    public:
    void disp()
{

std::cout<<"the marks of students is "<<marks;
std::cout<<"marks is "<<name;

}
};
int main()
{
    uday m;
    class1 c;
    class2 cp;
    c.   getdata();

    cp. getdata2();
    m. disp();
    return 0;

}
