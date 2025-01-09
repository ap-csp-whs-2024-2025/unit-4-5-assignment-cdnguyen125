#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // Task 1
    std::vector<int> wholeN = {1, 2, 3, 4, 5};
    std::vector<double> decimalN = {3.14, 2.72, 1.23, 4.56, 5.6};
    std::vector<std::string> names = {"Amy", "Christian", "Nathaniel", "Hoangoes", "Kaden"};

    // Task 2
    std::cout << "In the int list ";
    displayList(wholeN);
    std::cout << "the values at index 0, 2, and 4 are: " << wholeN[0] <<", " << wholeN[2] << ", and " << wholeN[4] << std::endl << std::endl;
    
    // Task 3
    std::cout << "The list of strings/names is: ";
    displayList(names);
    std::cout << "My name is Jonathan. Let's add that to the end of the list." << std::endl;
    names.push_back("Jonathan");
    displayList(names);
    std::cout << std::endl << std::endl;

    // Task 4
    std::cout << "Here's the list of decimals." << std::endl;
    displayList(decimalN);
    std::cout << "Time to erase the last number." << std::endl;
    decimalN.pop_back();
    displayList(decimalN);

    // Extra Stuff
    
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