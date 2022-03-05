// #include <iostream>
// #include <vector>

// using namespace std;

// template<class T = float, int i = 5> class A
// {
//    public:
//       A();
//       int value;
// };

// template<> class A<> { public: A(); };
// template<> class A<double, 10> { public: A(); };

// template<class T, int i> A<T, i>::A() : value(i) {
//    cout << "Primary template, "
//         << "non-type argument is " << value << endl;
// }

// A<>::A() {
//    cout << "Explicit specialization "
//         << "default arguments" << endl;
// }

// A<double, 10>::A() {
//    cout << "Explicit specialization "
//         << "<double, 10>" << endl;
// }

// int main() {
//    A<int,6> x;
//    A<> y;
//    A<double, 10> z;
//    A<char> m;
// }

// template<class T> class X { 
// 	public :
// 		X() {
// 			cout << "Primary template, "
//     	    << "X<>" << endl;
// 		}
// };
// template<>  class X<char>{
// 	public :
// 		X() {
// 			cout << "Explicit specialization "
//     	    << "X<char>" << endl;
// 		}
// };
// const int *fct(int *i){return i;}
// int main() 
// {

// // std::vector<int> test(10,3);
// // std::vector<int>::iterator it(test.end());

// // std::cout << *it << std::endl;
// // X<int> i;
// // X<char> j;
// // int z =4;
// // int *l = fct(&z);
// // *l = 12;
// // cout << l << endl;
// 	std::vector<int> myvector;
// 	std::vector<int>::allocator_type my_alloc;
// 	std::vector<string> myvec;
// 	std::vector<string>::allocator_type vec_alloc;
// 	myvector.push_back(1);
// 	myvector.push_back(2);
// 	myvector.push_back(3);
// 	std::vector<int>::reverse_iterator it = myvector.rbegin();
// 	std::vector<int>::reverse_iterator it2 = myvector.rend() - 1;

// 	std::cout << *it2 << std::endl;
// 	std::cout << *it << std::endl;
// 	  std::cout << "max_size: " << myvector.max_size() << "\n";
// 	  std::cout << "allo: " << my_alloc.max_size() << "\n";
// 	  std::cout << "max_size: " << myvec.max_size() << "\n";
// 	  std::cout << "allo: : " << vec_alloc.max_size() << "\n";

// 	// std::cout << *it << std::endl;
// 	return 0;
// }

// resizing vector
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  // set some initial content:
	for (int i=1;i<7;i++) 
	{
		//std::cout << "capacity" << myvector.capacity() << std::endl; 
  		myvector.push_back(i);
	}

	std::cout << "capacity" << myvector.capacity() << std::endl;
	myvector.resize(5);
	for (int i=0;i<myvector.size();i++)
    	std::cout << ' ' << myvector[i];
	std::cout << '\n';
	std::cout << "capacity" << myvector.capacity() << std::endl;
	myvector.resize(8,100);
	std::cout << "capacity" << myvector.capacity() << std::endl;
	myvector.resize(12);
	std::cout << "capacity" << myvector.capacity() << std::endl;

  std::cout << "myvector contains:";
  for (int i=0;i<myvector.size();i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}