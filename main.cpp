#include <iostream>
#include <string>
#include <vector>
// advance example
#include <iterator>     // std::advance
#include <list>         // std::list

// int main ()
// {
	// std::vector<int> myvec;
	// for (int i = 0; i < 10; i++) myvec.push_back (i * 10);

	// std::vector<int>::iterator it = myvec.begin();

	// std::advance (it,5);

	// std::cout << "The sixth element in myvec is: " << *it << '\n';
	// int i;
	// for ( i = 0; i < 10; i++) std::cout << i << std::endl; std::cout << std::endl;
	// for (i ; i < 20; ++i) std::cout << i << std::endl;
	// return 0;
// }
//* resizing vector
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  // set some initial content:
  for (int i=1;i<10;i++) myvector.push_back(i);

	std::cout << "myvector capacity" << myvector.size() << std::endl;
  myvector.resize(5);
//   myvector.resize(8,100);
//   myvector.resize(12);
	std::cout << "myvector capacity" << myvector.size() << std::endl;
	std::cout << "myvector contains:";
	for (int i=0;i<myvector.size();i++)
	  std::cout << ' ' << myvector[i];
	std::cout << '\n';

	return 0;
}