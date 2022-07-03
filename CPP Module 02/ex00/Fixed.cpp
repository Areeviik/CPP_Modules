#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->fixed_point_num = 0;
    this->fractional_bits = 8;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (fixed_point_num);
}

void Fixed::setRawBits( int const raw)
{
    this->fixed_point_num = raw;
}