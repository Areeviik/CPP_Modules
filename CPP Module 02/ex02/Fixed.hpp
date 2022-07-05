/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:10:50 by akhachat          #+#    #+#             */
/*   Updated: 2022/07/05 18:23:24 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point_num;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int val);
        Fixed(const float val);
        Fixed & operator= (const Fixed& val);
        bool operator>(const Fixed& val);
        bool operator<(const Fixed& val);
        bool operator>=(const Fixed& val);
        bool operator<=(const Fixed& val);
        bool operator==(const Fixed & val);
        bool operator!=(const Fixed &val);
        Fixed operator+(const Fixed &val);
        Fixed operator-(const Fixed &val);
        Fixed operator*(const Fixed &val);
        Fixed operator/(const Fixed &val);
        Fixed & operator++(int val);
        Fixed operator++(void);
        Fixed operator--(void);
        Fixed & operator--(int val);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed const &max(Fixed const &a, Fixed const &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        
};

std::ostream & operator<<(std::ostream &o, Fixed const &val);

#endif