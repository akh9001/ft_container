// #include <iostream>

// void	test(int i = 30)
// {
// 	std::cout << i << std::endl;
// }

// class Base
// {
// 	protected :
// 		int k;
// 	public :
// 		Base(): k(10){};
// 		Base(int l) : k(l = 10){};
// 		~Base(){};
// };
// class Child :   Base
// {
// 	public :
// 		Child(){};
// 		int get_k() {return (k);}
// };

// class Child1 :  public Child
// {
// 	public :
// 		Child1(){};
// 		int get_k() {return (k);}
// };

// int main( void )
// {
// 	// Child1 l;
// 	// std::cout << l.get_k() << std::endl;

// }

// C++ program for illustration
// of std::allocator() function
#include <iostream>
#include <memory>
using namespace std;
int main()
{

	// allocator for integer values
	allocator<int> myAllocator;

	// allocate space for five ints
	int* arr = myAllocator.allocate(5);

	// construct arr[0] and arr[3]
	myAllocator.construct(arr, 100);
	arr[3] = 10;

	cout << arr[3] << endl;
	cout << arr[0] << endl;

	// deallocate space for five ints
	myAllocator.deallocate(arr, 5);

	return 0;
}
// template < class T>
// class Iterator
// {
// 	private :
// 		T *_ptr;
// 	public :
		
// }