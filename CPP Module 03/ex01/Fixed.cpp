/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:46 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/05 17:42:17 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->fixed_point_num = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout<< "Copy constructor called" <<std::endl;
    this->fixed_point_num = other.getRawBits();
}

Fixed::Fixed(const int val)
{
    std::cout<<"Constructor for int called"<<std::endl;
    this->fixed_point_num = (val<<fractional_bits);
}

Fixed::Fixed(const float val)
{
    std::cout<<"Constructor for float called"<<std::endl;
    this->fixed_point_num= roundf((val*(1<<fractional_bits)));
}

Fixed &Fixed::operator=(Fixed const &obj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->fixed_point_num=obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::toInt( void ) const
{
    return (int)this->fixed_point_num >>this->fractional_bits;
}

float Fixed::toFloat( void ) const
{
    return (float)fixed_point_num/ (float)(1<<fractional_bits);
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

std::ostream & operator<<( std::ostream &o, Fixed const &value)
{
    o << value.toFloat();
    return (o);
}