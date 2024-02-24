#include "iter.hpp"

int main(){
	char str[] = "hello";
	int arr[] = {0, 1, 2, 5, 6};
	std::cout << "first array: " << std::endl;
	::iter(str, sizeof(str)/sizeof(char), func<char>);
	std::cout << "second array: " << std::endl;
	::iter(arr, (sizeof(arr)/sizeof(*arr)), func<int>);
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }