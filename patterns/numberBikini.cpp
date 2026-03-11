#include <iostream>

int main()
{
    std::cout<<"Enter number of rows:";
    int n{};
    std::cin>>n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout<<j+1;
        }
        for (int j = 0; j < 2 * (n - i - 1); ++j)
        {
            std::cout<<" ";
        }
        for (int j = i; j >= 0; --j)
        {
            std::cout<<j+1;
        }
        std::cout<<"\n";
    }
    return 0;
}