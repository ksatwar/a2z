#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Enter rows:";
    int n{};
    std::cin>>n;
    int binary;
    
    for (int i = 0; i < n; ++i)
    {
        binary = i & 1;
        for (int j = 0; j <=i; ++j)
        {
            std::cout<<(binary = !binary);
        }
        std::cout<<"\n";
    }

    return 0;
}