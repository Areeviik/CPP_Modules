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
    fixed_point_num = 0;
}

Fixed::Fixed(const Fixed &other)
{
    fixed_point_num=other.getRawBits();
}

Fixed::Fixed(int const val)
{
    fixed_point_num = (val << fractional_bits);
}

Fixed::Fixed(float const val)
{
    fixed_point_num = roundf(val * (1 << fractional_bits));
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called."<<std::endl;
}

int Fixed::toInt(void) const
{
    return fixed_point_num >> fractional_bits;
}

float Fixed::toFloat(void) const
{
    return (float)fixed_point_num / (float)(1 << fractional_bits);
}

Fixed & Fixed::operator= (const Fixed &val)
{
    fixed_point_num = val.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return fixed_point_num;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_num = fixed_point_num;
}     

bool Fixed::operator==(Fixed const &val)
{
    if (fixed_point_num == val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator>=(Fixed const & val)
{
    if (fixed_point_num >= val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator<=(Fixed const & val)
{
    if (fixed_point_num <= val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator>(Fixed const & val)
{
    if (fixed_point_num > val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator<(Fixed const & val)
{
    if (fixed_point_num < val.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator!=(Fixed const & val)
{
    if (fixed_point_num != val.getRawBits())
        return 1;
    return 0;
}

Fixed Fixed::operator+(const Fixed &val)
{
    Fixed sum;
    
    sum.setRawBits(this->fixed_point_num + val.fixed_point_num);
    return sum;
}

Fixed Fixed::operator-(const Fixed &val)
{
    Fixed sub;
    
    sub.setRawBits(this->fixed_point_num - val.fixed_point_num);
    return sub;
}

Fixed Fixed::operator*(const Fixed &val)
{
    Fixed mul;
    
    mul.setRawBits(this->fixed_point_num * val.fixed_point_num / (1 << this->fractional_bits));
    return mul;
}

Fixed Fixed::operator/(const Fixed &val)
{
    Fixed div;
    
    div.setRawBits(this->fixed_point_num / val.fixed_point_num * (1 << this->fractional_bits));
    return div;
}

Fixed Fixed::operator++()
{
    Fixed temp(*this);
    temp.fixed_point_num = ++fixed_point_num;
    return temp;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    temp.fixed_point_num = fixed_point_num++;
    return temp;
}

Fixed Fixed::operator--()
{
    Fixed temp(*this);
    temp.fixed_point_num = --fixed_point_num;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    temp.fixed_point_num = fixed_point_num--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a.fixed_point_num > b.fixed_point_num)
        return b;
    return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a.fixed_point_num > b.fixed_point_num)
        return b;
    return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a.fixed_point_num < b.fixed_point_num)
        return b;
    return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a.fixed_point_num < b.fixed_point_num)
        return b;
    return a;
}

std::ostream& operator<<(std::ostream& o, Fixed const &value)
{
    o << value.toFloat();
    return o;
}