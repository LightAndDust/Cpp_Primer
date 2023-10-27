#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <iterator>


int main()
{
    std::vector<std::string> text;

    for (std::string line;  getline(std::cin, line); text.push_back(line));

    if (text.begin() == text.end()){return -1;}

    auto p = text.begin();

    for (auto it = p->begin(); it != p->end(); it++)
    {
        if (isalpha(*it))
        {
            *it = toupper(*it);
        }
        
    }
    
    for (auto line = text.begin();  line != text.end(); ++line)
    {
        std::cout << *line << std::endl;
    }
    
}