#include<iostream>
class def{
    float rad;
  float area_of_circle;
    public:
    def()
    {
        std::cout<<"enter the value rad" ;
        std::cin>>rad;
        area_of_circle = 3.14*rad*rad;
        std::cout<<"area of circle is="<<area_of_circle;

    }

};
int main()
{
  def obj;

}