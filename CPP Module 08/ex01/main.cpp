#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout <<"Shortest Span:" << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::vector<int> v;
    try
    {
        for (int i = 0; i < 23000; i++)
	    {
	    	v.push_back(i);
	    }
	    Span test = Span(23000);
	    test.addManyNums(v.begin(), v.end());
	    std::cout << "Shortest Span:" << test.shortestSpan() << std::endl;
	    std::cout << "Longest Span: " << test.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}
