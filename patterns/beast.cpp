#include<iostream>
#include<algorithm>
int main(void)
{
    std::cout<<"enter rows:";
    int n{};
    std::cin>>n;

    for (int i = 0; i < 2*n - 1; ++i)
    {
        for (int j = 0; j < 2*n - 1; ++j)
        {
            std::cout<<n - std::min(std::min(i,j),std::min(2*n - 2 - j,2*n - 2 - i));
        }
        std::cout<<"\n";
    }
    return 0;
}