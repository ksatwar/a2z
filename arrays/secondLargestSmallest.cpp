// Online C++ compiler to run C++ program online
#include <iostream>
#include <array>
#include <climits>
int main() {
    // Write C++ code here
    std::array temp = {1,2,3,4,5,6,7,8,9,10};
    int n {temp.size()};
    if (n < 2)
    {
        printf("-1");
        return -1;
    }
    int max1{std::max(temp[0], temp[1])}, max2{std::min(temp[0],temp[1])};// the standard way is slightly different
    int min1{max2}, min2{max1};
    for (int i = 2; i < n; ++i)
    {
        if (temp[i] > max1)
        {
            max2 = max1;
            max1 = temp[i];
        }
        else if (temp[i] > max2)
        {
            max2 = temp[i];
        }

        if (temp[i] < min1)
        {
            min2 = min1;
            min1 = temp[i];
        }
        else if (temp[i] < min2)
        {
            min2 = temp[i];
        }
    }

    std::cout<<max1<<" "<<max2<<" "<<min1<<" "<<min2;
    return 0;
}