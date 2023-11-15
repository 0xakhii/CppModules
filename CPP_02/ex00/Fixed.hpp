#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed &fixed);
		int getRawBits() const;
		void setRawBits(int const raw);
	private:
		int FixedValue;
		static const int FractionalBits;
};


#endif