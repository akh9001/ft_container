#include <iostream>

class Foo
{
	private:
	int m_foo;

	public:
	// single parameter constructor, can be used as an implicit conversion
	Foo (int foo) : m_foo (foo) {}
	// explicit Foo (int foo) : m_foo (foo) {}

	int GetFoo () { return m_foo; }
};

void DoBar (Foo foo)
{
  int i = foo.GetFoo ();
}
int	main(int ac, char **argv)
{
  DoBar (42);
  return (0);
}