#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point{
	public:
		Point();
	private:
		Fixed const x;
		Fixed const y;
};

#endif