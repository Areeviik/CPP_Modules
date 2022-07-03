#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixed_point_num;
        int fractional_bits;
    public:
        Fixed();
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif