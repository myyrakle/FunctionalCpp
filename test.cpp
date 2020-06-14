#include "./include/gimlet.h"

#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<std::vector<int>> v = {
        {1,2,3}, {4,5}, {0,9,8,7}
    };
    auto folded = fold(v);

    for(auto e : folded)
    {
        std::cout<<e<<' ';
    }
}