#include <iostream>

using namespace std;

int main()
{
    std::cout<<"Calculator"<<::endl;
    int x{},y{};
    int sum, sub, mul, div;

    std::cout<<"Give first number :" << :: endl;
    std::cin>>x;
    std::cout<<"Give second number :" << ::endl;
    std::cin>>y;

    sum = x+y;
    sub = x-y;
    mul = x * y;
    div = x/y;

    std::cout<<"Sum is : "<< sum <<::endl;
    std::cout<<"sub is : "<< sub <<::endl;
    std::cout<<"mul is : "<< mul <<::endl;
    std::cout<<"div is : "<< div <<::endl;
    return 0;
}
