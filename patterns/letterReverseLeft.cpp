#include<iostream>
int main(void)
{
    std::cout<<"enter rows:";
    int n{};
    std::cin>>n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = n - i - 1; j < n; j++)
        {
            std::cout<<static_cast<char>(j + 'A');
        }
        std::cout<<"\n";
    }
    return 0;
}