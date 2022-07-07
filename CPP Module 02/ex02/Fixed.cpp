/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:46 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/05 18:28:13 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point_num = 0;
}

Fixed::Fixed(const Fixed &other)
{
    this->fixed_point_num = other.getRawBits();
}

Fixed::Fixed(const int val)
{
    fixed_point_num = (val<<fractional_bits);
}

Fixed::Fixed(const float val)
{
   fixed_point_num= roundf(val*(1<<fractional_bits));
}

bool Fixed::operator>(Fixed const &val)
{
    if (this->fixed_point_num > val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator<(Fixed const &val)
{
    if (this->fixed_point_num < val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator>=(Fixed const &val)
{
    if (this->fixed_point_num >= val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator<=(Fixed const &val)
{
    if (this->fixed_point_num <= val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator==(Fixed const &val)
{
    if (this->fixed_point_num == val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator!=(Fixed const &val)
{
    if (this->fixed_point_num != val.getRawBits())
        return 1;
    return 0;
}

Fixed Fixed::operator+(const Fixed &val)
{
    Fixed sum;
    sum = this->fixed_point_num + val.getRawBits();
    return (sum); 
}

Fixed Fixed::operator-(const Fixed &val)
{
    Fixed sub;
    sub = this->fixed_point_num - val.getRawBits();
    return (sub); 
}

Fixed Fixed::operator*(const Fixed &val)
{
    Fixed mul;
    mul = this->fixed_point_num * val.getRawBits() / (1<<this->fractional_bits);
    return (mul); 
}

Fixed Fixed::operator/(const Fixed &val)
{
    Fixed div;
    div = this->fixed_point_num / val.getRawBits() * (1<<this->fractional_bits);
    return (div); 
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    temp.fixed_point_num=fixed_point_num++;
    return temp;
}

Fixed Fixed::operator++(void)
{
    Fixed temp(*this);
    temp.fixed_point_num=++fixed_point_num;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    temp.fixed_point_num=fixed_point_num--;
    return temp;
}

Fixed Fixed::operator--(void)
{
    Fixed tmp(*this);
    tmp.fixed_point_num= --fixed_point_num;
    return tmp;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::toInt( void ) const
{
    return fixed_point_num >> fractional_bits;
}

float Fixed::toFloat( void ) const
{
    return (float)fixed_point_num/(float)(1<<fixed_point_num);
}

int Fixed::getRawBits(void) const
{
    return (fixed_point_num);
}

void Fixed::setRawBits( int const raw)
{
    this->fixed_point_num = raw;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.fixed_point_num > b.fixed_point_num)
        return a;
    return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.fixed_point_num < b.fixed_point_num)
        return a;
    return b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a.fixed_point_num > b.fixed_point_num)
        return a;
    return b;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    if (a.fixed_point_num < b.fixed_point_num)
        return a;
    return b;
}

Fixed &Fixed::operator=(Fixed const &obj)
{
    this->fixed_point_num=obj.getRawBits();
    return *this;
}

std::ostream & operator<<( std::ostream &o, Fixed const &value)
{
    o << value.toFloat();
    return (o);
}