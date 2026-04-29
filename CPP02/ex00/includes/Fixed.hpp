#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
	int _value;
	static const int _fracint = 8;

	public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();

	int getRawbits( void ) const;
	void setRawbits( int const raw );
};

#endif