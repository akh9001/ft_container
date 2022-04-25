#include <iostream>
#include <type_traits>

struct TYPE {
	TYPE(int c) : a(c)
	{
	}
	const int a;
	int b;
};

int main()
{
	TYPE a(2);

}
