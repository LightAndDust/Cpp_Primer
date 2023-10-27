#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};

    for (auto it =  ivec.begin(); it != ivec.end(); ++it){
        *it = (*it) * 2;
    }

    for (auto it =  ivec.begin(); it != ivec.end(); ++it){
        std::cout << *it << (it == (ivec.end() - 1) ? "\n" : ",");
    }


}