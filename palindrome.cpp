#include<iostream>
#include<string>
class palindrome{
    std::string str;
    public:
    palindrome(std::string s)
    {
        str = s;
        int n = str.length();
        int flag = 0;
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            std::cout<<"the given number is palindrome";
        }
        else
        {
            std::cout<<"the give number is not palindrome";
        }
    }
};
int main()
{
    std::string s;
    std::cin>>s;
    palindrome p(s);
    return 0;
}
//palindrome 