#include <iostream>
class a
{
    public:
    int a, b;
    public :
void getdata()
{
    std::cout<<"enter the  value of a and b ";
std::cin>>a>>b;

}
};
class b:a
{
    public :
int sum;
    void  add(){
    sum = a + b;
        
    }
};


//this is the example of multiple inheritance 

