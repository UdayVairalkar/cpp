#include<iostream>
class para
{
    float area,len ,bre;
    public:
    para(float a,float b)
    {
    len =a;
    bre = b;
    
    area = len*bre;
    std::cout<<"area of reactangle ="<<area;
}
};
int main()
{
   para(10,20);

return 0;
}

//basic of cpp 
