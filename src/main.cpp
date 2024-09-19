#include <iostream>
#include <map>

int main()
{
    std::map<std::string, std::string> m_map{};
    std::string name = "test";
    m_map[name] = "chicken";
    for (auto p : m_map) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    return 0;
}