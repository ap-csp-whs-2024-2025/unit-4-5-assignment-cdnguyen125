#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    std::vector<int> wholeN = {1, 2, 3, 4, 5};
    std::vector<double> decimalN = {3.14, 2.72, 1.23, 4.56, 5.6};
    std::vector<std::string> names = {"Amy", "Christian", "Nathaniel", "Hoangoes", "Kaden"};

    std::cout << "In the int list, the values at index 0, 2, and 4 are: " << wholeN[0] <<", " << wholeN[2] << ", and " << wholeN[4] << std::endl << std::endl;
    
    std::cout << "The list of strings/names is: " << std::endl;
    displayList(names);


    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}