#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout <<"Shortest Span:" << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    int i = 0;
    int len = 23000;
    int *arr;
    while (i < len)
    {
        arr[i] = rand();
        i++;
    }
    Span obj = Span(len);
    obj.addManyNums(arr, len);
    std::cout<<"Shortest Span: " << obj.shortestSpan() <<std::endl;
    std::cout <<"Longest Span: " << obj.longestSpan() <<std::endl;
    return 0;
}
