#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
	int _value;
	static const int _fracint = 8;

	public:
	Fixed();
	Fixed(const int value);
    Fixed(const float num);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();

	float toFloat( void ) const;
    int toInt( void ) const;
	int getRawbits( void ) const;
	void setRawbits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif