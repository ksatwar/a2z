#include <iostream>
int main(void)
{
    std::cout<<"enter rows:";
    int n{};
    std::cin>>n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            std::cout<<" ";
        }
        for (int j = 0; j <= i; ++j)
        {
            std::cout<<static_cast<char>(j + 'A');
        }
        for (int j = i - 1; j >= 0; --j)
        {
            std::cout<<static_cast<char>(j + 'A');
        }

        std::cout<<"\n";

    }
    return 0;
}