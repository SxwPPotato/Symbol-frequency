#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

bool pred(const std::pair< int, int >& a, const std::pair< int, int >& b)
{
    return a.second > b.second;
}


int main()
{
    std::map<char, int> mp;
    std::string str = "Hello world!!";

    for (auto i : str) ++mp[i];
    std::vector< std::pair< char, int > > vec(mp.begin(), mp.end());
    std::sort(vec.begin(), vec.end(), pred);

    for (auto p : vec) 
        std::cout << p.first << ' ' << p.second << std::endl;


    return 0;

}

