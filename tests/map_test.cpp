#include <iostream>
#include "../containers/map.hpp"
#include <map>
#include <vector>
#include <iostream>
#include <iterator>
#include <utility>
#include <ctime>
#include <iomanip>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
#include <random>


#define BLUE "\e[0;34m"
#define red "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[1;33m"
#define RESET "\e[0m"



template <typename Iter1>
void print_elemts(Iter1 first1, Iter1 last1)
{
	for (; (first1 != last1) ; ++first1)
		std::cout << (*first1).first << ' ';
	std::cout << std::endl;
}


bool fncomp (char lhs, char rhs) {return lhs<rhs;}

struct classcomp {
  bool operator() (const char& lhs, const char& rhs) const
  {return lhs<rhs;}
};

int main() {

std::cout << YELLOW << "\t===================================test construct===================================" << RESET << std::endl;
{

	{
		std::cout << "std::map\n";
		std::map<char,int> first;
		first['a']=10;
		first['b']=30;
		first['c']=50;
		first['d']=70;

		std::map<char,int> second (first.begin(),first.end());

		std::map<char,int> third (second);

		std::map<char,int,classcomp> fourth;                 // class as Compare

		bool(*fn_pt)(char,char) = fncomp;
		std::map<char,int,bool(*)(char,char)> fifth (fn_pt); // function pointer as Compar
		std::cout << "size = " << third.size() << '\n';
		std::cout << "map elements: \n";
		print_elemts(third.begin(), third.end());
	}
	{
		std::cout << "ft::map\n";
		ft::map<char,int> first;
		first['a']=10;
		first['b']=30;
		first['c']=50;
		first['d']=70;

		ft::map<char,int> second (first.begin(),first.end());

		ft::map<char,int> third (second);

		ft::map<char,int,classcomp> fourth;                 // class as Compare

		bool(*fn_pt)(char,char) = fncomp;
		ft::map<char,int,bool(*)(char,char)> fifth (fn_pt); // function pointer as Compar
		std::cout << "size = " << third.size() << '\n';
		std::cout << "map elements: \n";
		print_elemts(third.begin(), third.end());
	}
}
std::cout << YELLOW << "\t===================================test begin/end===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
		std::map<char,int> mymap;
  		mymap['b'] = 100;
  		mymap['a'] = 200;
  		mymap['c'] = 300;
  		// show content:
  		for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';

	}

	{
		std::cout << "ft::map\n";
		ft::map<char,int> mymap;
  		mymap['b'] = 100;
  		mymap['a'] = 200;
  		mymap['c'] = 300;
  		// show content:
  		for (ft::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	}

}

std::cout << YELLOW << "\t===================================test clear===================================" << RESET << std::endl;


{
	{
		std::cout << "std::map\n";
		std::map<char,int> mymap;

		mymap['x']=100;
		mymap['y']=200;
		mymap['z']=300;

		std::cout << "mymap contains:\n";
		for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
		  std::cout << it->first << " => " << it->second << '\n';

		mymap.clear();
		mymap['a']=1101;
		mymap['b']=2202;

		std::cout << "mymap contains:\n";
		for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';

	}

	{
		std::cout << "ft::map\n";
		ft::map<char,int> mymap;

		mymap['x']=100;
		mymap['y']=200;
		mymap['z']=300;

		std::cout << "mymap contains:\n";
		for (ft::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
		  std::cout << it->first << " => " << it->second << '\n';

		mymap.clear();
		mymap['a']=1101;
		mymap['b']=2202;

		std::cout << "mymap contains:\n";
		for (ft::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';
	}
}



std::cout << YELLOW << "\t===================================test count===================================" << RESET << std::endl;


{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;
  		char c;

  		mymap ['a']=101;
  		mymap ['c']=202;
  		mymap ['f']=303;

  		for (c='a'; c<'h'; c++)
  		{
    		std::cout << c;
    		if (mymap.count(c)>0)
    		  std::cout << " is an element of mymap.\n";
    		else
    		  std::cout << " is not an element of mymap.\n";
		}

	{
		std::cout << "ft::map\n";
		ft::map<char,int> mymap;
  		char c;

  		mymap ['a']=101;
  		mymap ['c']=202;
  		mymap ['f']=303;

  		for (c='a'; c<'h'; c++)
  		{
    		std::cout << c;
    		if (mymap.count(c)>0)
    		  std::cout << " is an element of mymap.\n";
    		else
    		  std::cout << " is not an element of mymap.\n";
		}

	}
}
std::cout << YELLOW << "\t===================================test empty===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;

  		mymap['a']=10;
  		mymap['b']=20;
  		mymap['c']=30;

  		while (!mymap.empty())
  		{
  		  std::cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
  		  mymap.erase(mymap.begin());
  		}
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;

  		mymap['a']=10;
  		mymap['b']=20;
  		mymap['c']=30;

  		while (!mymap.empty())
  		{
  		  std::cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
  		  mymap.erase(mymap.begin());
  		}
	}
}

std::cout << YELLOW << "\t===================================test equal_range===================================" << RESET << std::endl;


{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;

  		mymap['a']=10;
  		mymap['b']=20;
  		mymap['c']=30;

  		std::pair<std::map<char,int>::iterator,std::map<char,int>::iterator> ret;
  		ret = mymap.equal_range('b');

  		std::cout << "lower bound points to: ";
  		std::cout << ret.first->first << " => " << ret.first->second << '\n';

  		std::cout << "upper bound points to: ";
  		std::cout << ret.second->first << " => " << ret.second->second << '\n';

	}
	{
		std::cout << "ft::map\n";
		ft::map<char,int> mymap;

  		mymap['a']=10;
  		mymap['b']=20;
  		mymap['c']=30;

  		ft::pair<ft::map<char,int>::iterator,ft::map<char,int>::iterator> ret;
  		ret = mymap.equal_range('b');

  		std::cout << "lower bound points to: ";
  		std::cout << ret.first->first << " => " << ret.first->second << '\n';

  		std::cout << "upper bound points to: ";
  		std::cout << ret.second->first << " => " << ret.second->second << '\n';
	}
}
std::cout << YELLOW << "\t===================================test erase===================================" << RESET << std::endl;


{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;
  		std::map<char,int>::iterator it;

  		// insert some values:
  		mymap['a']=10;
  		mymap['b']=20;
  		mymap['c']=30;
  		mymap['d']=40;
  		mymap['e']=50;
  		mymap['f']=60;

  		it=mymap.find('b');
  		mymap.erase (it);                   // erasing by iterator

  		mymap.erase ('c');                  // erasing by key

  		it=mymap.find ('e');
  		mymap.erase ( it, mymap.end() );    // erasing by range

  		// show content:
  		for (it=mymap.begin(); it!=mymap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;
  		ft::map<char,int>::iterator it;

  		// insert some values:
  		mymap['a']=10;
  		mymap['b']=20;
  		mymap['c']=30;
  		mymap['d']=40;
  		mymap['e']=50;
  		mymap['f']=60;

  		it=mymap.find('b');
  		mymap.erase (it);                   // erasing by iterator

  		mymap.erase ('c');                  // erasing by key

  		it=mymap.find ('e');
  		mymap.erase ( it, mymap.end() );    // erasing by range

  		// show content:
  		for (it=mymap.begin(); it!=mymap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
}
std::cout << YELLOW << "\t===================================test find===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;
  		std::map<char,int>::iterator it;

  		mymap['a']=50;
  		mymap['b']=100;
  		mymap['c']=150;
  		mymap['d']=200;

  		it = mymap.find('b');
  		if (it != mymap.end())
  		  mymap.erase (it);

  		// print content:
  		std::cout << "elements in mymap:" << '\n';
  		std::cout << "a => " << mymap.find('a')->second << '\n';
  		std::cout << "c => " << mymap.find('c')->second << '\n';
  		std::cout << "d => " << mymap.find('d')->second << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;
  		ft::map<char,int>::iterator it;

  		mymap['a']=50;
  		mymap['b']=100;
  		mymap['c']=150;
  		mymap['d']=200;

  		it = mymap.find('b');
  		if (it != mymap.end())
  		  mymap.erase (it);

  		// print content:
  		std::cout << "elements in mymap:" << '\n';
  		std::cout << "a => " << mymap.find('a')->second << '\n';
  		std::cout << "c => " << mymap.find('c')->second << '\n';
  		std::cout << "d => " << mymap.find('d')->second << '\n';
	}
}
std::cout << YELLOW << "\t===================================test get_allocator===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		int psize;
  		std::map<char,int> mymap;
  		std::pair<const char,int>* p;

  		// allocate an array of 5 elements using mymap's allocator:
  		p=mymap.get_allocator().allocate(5);

  		// assign some values to array
  		psize = sizeof(std::map<char,int>::value_type)*5;

  		std::cout << "The allocated array has a size of " << psize << " bytes.\n";

  		mymap.get_allocator().deallocate(p,5);
	}
	{
		std::cout << "ft::map\n";
  		int psize;
  		ft::map<char,int> mymap;
  		ft::pair<const char,int>* p;

  		// allocate an array of 5 elements using mymap's allocator:
  		p=mymap.get_allocator().allocate(5);

  		// assign some values to array
  		psize = sizeof(ft::map<char,int>::value_type)*5;

  		std::cout << "The allocated array has a size of " << psize << " bytes.\n";

  		mymap.get_allocator().deallocate(p,5);

	}
}
std::cout << YELLOW << "\t===================================test insert===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;

  		// first insert function version (single parameter):
  		mymap.insert ( std::pair<char,int>('a',100) );
  		mymap.insert ( std::pair<char,int>('z',200) );

  		std::pair<std::map<char,int>::iterator,bool> ret;
  		ret = mymap.insert ( std::pair<char,int>('z',500) );
  		if (ret.second==false)
		{
  		  std::cout << "element 'z' already existed";
  		  std::cout << " with a value of " << ret.first->second << '\n';
  		}

  		// second insert function version (with hint position):
  		std::map<char,int>::iterator it = mymap.begin();
  		mymap.insert (it, std::pair<char,int>('b',300));  // max efficiency inserting
  		mymap.insert (it, std::pair<char,int>('c',400));  // no max efficiency inserting

  		// third insert function version (range insertion):
  		std::map<char,int> anothermap;
  		anothermap.insert(mymap.begin(),mymap.find('c'));

  		// showing contents:
  		std::cout << "mymap contains:\n";
  		for (it=mymap.begin(); it!=mymap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

  		std::cout << "anothermap contains:\n";
  		for (it=anothermap.begin(); it!=anothermap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;

  		// first insert function version (single parameter):
  		mymap.insert ( ft::pair<char,int>('a',100) );
  		mymap.insert ( ft::pair<char,int>('z',200) );

  		ft::pair<ft::map<char,int>::iterator,bool> ret;
  		ret = mymap.insert ( ft::pair<char,int>('z',500) );
  		if (ret.second==false)
		{
  		  std::cout << "element 'z' already existed";
  		  std::cout << " with a value of " << ret.first->second << '\n';
  		}

  		// second insert function version (with hint position):
  		ft::map<char,int>::iterator it = mymap.begin();
  		mymap.insert (it, ft::pair<char,int>('b',300));  // max efficiency inserting
  		mymap.insert (it, ft::pair<char,int>('c',400));  // no max efficiency inserting

  		// third insert function version (range insertion):
  		ft::map<char,int> anothermap;
  		anothermap.insert(mymap.begin(),mymap.find('c'));

  		// showing contents:
  		std::cout << "mymap contains:\n";
  		for (it=mymap.begin(); it!=mymap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

  		std::cout << "anothermap contains:\n";
  		for (it=anothermap.begin(); it!=anothermap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
}
std::cout << YELLOW << "\t===================================test key_compare===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;

  		std::map<char,int>::key_compare mycomp = mymap.key_comp();

  		mymap['a']=100;
  		mymap['b']=200;
  		mymap['c']=300;

  		std::cout << "mymap contains:\n";

  		char highest = mymap.rbegin()->first;     // key value of last element

  		std::map<char,int>::iterator it = mymap.begin();
  		do {
  		  std::cout << it->first << " => " << it->second << '\n';
  		} while ( mycomp((*it++).first, highest) );

  		std::cout << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;

  		ft::map<char,int>::key_compare mycomp = mymap.key_comp();

  		mymap['a']=100;
  		mymap['b']=200;
  		mymap['c']=300;

  		std::cout << "mymap contains:\n";

  		char highest = mymap.rbegin()->first;     // key value of last element

  		ft::map<char,int>::iterator it = mymap.begin();
  		do {
  		  std::cout << it->first << " => " << it->second << '\n';
  		} while ( mycomp((*it++).first, highest) );

  		std::cout << '\n';

	}
}
std::cout << YELLOW << "\t===================================test lower/upper_bound===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;
  		std::map<char,int>::iterator itlow,itup;

  		mymap['a']=20;
  		mymap['b']=40;
  		mymap['c']=60;
  		mymap['d']=80;
  		mymap['e']=100;

  		itlow=mymap.lower_bound ('b');  // itlow points to b
  		itup=mymap.upper_bound ('d');   // itup points to e (not d!)

  		mymap.erase(itlow,itup);        // erases [itlow,itup)

  		// print content:
  		for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;
  		ft::map<char,int>::iterator itlow,itup;

  		mymap['a']=20;
  		mymap['b']=40;
  		mymap['c']=60;
  		mymap['d']=80;
  		mymap['e']=100;

  		itlow=mymap.lower_bound ('b');  // itlow points to b
  		itup=mymap.upper_bound ('d');   // itup points to e (not d!)

  		mymap.erase(itlow,itup);        // erases [itlow,itup)

  		// print content:
  		for (ft::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
}
std::cout << YELLOW << "\t===================================test max_size===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		int i;
  		std::map<int,int> mymap;

  		if (mymap.max_size()>1000)
  		{
  		  for (i=0; i<1000; i++) mymap[i]=0;
  		  std::cout << "The map contains 1000 elements.\n";
  		}
  		else std::cout << "The map could not hold 1000 elements.\n";
	}
	{
		std::cout << "ft::map\n";
  		int i;
  		ft::map<int,int> mymap;

  		if (mymap.max_size()>1000)
  		{
  		  for (i=0; i<1000; i++) mymap[i]=0;
  		  std::cout << "The map contains 1000 elements.\n";
  		}
  		else std::cout << "The map could not hold 1000 elements.\n";

	}
}
std::cout << YELLOW << "\t===================================test operator= ===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> first;
  		std::map<char,int> second;

  		first['x']=8;
  		first['y']=16;
  		first['z']=32;

  		second=first;                // second now contains 3 ints
  		first=std::map<char,int>();  // and first is now empty

  		std::cout << "Size of first: " << first.size() << '\n';
  		std::cout << "Size of second: " << second.size() << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> first;
  		ft::map<char,int> second;

  		first['x']=8;
  		first['y']=16;
  		first['z']=32;

  		second=first;                // second now contains 3 ints
  		first=ft::map<char,int>();  // and first is now empty

  		std::cout << "Size of first: " << first.size() << '\n';
  		std::cout << "Size of second: " << second.size() << '\n';

	}
}
std::cout << YELLOW << "\t===================================test operator[]===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,std::string> mymap;

  		mymap['a']="an element";
  		mymap['b']="another element";
  		mymap['c']=mymap['b'];

  		std::cout << "mymap['a'] is " << mymap['a'] << '\n';
  		std::cout << "mymap['b'] is " << mymap['b'] << '\n';
  		std::cout << "mymap['c'] is " << mymap['c'] << '\n';
  		std::cout << "mymap['d'] is " << mymap['d'] << '\n';

  		std::cout << "mymap now contains " << mymap.size() << " elements.\n";
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,std::string> mymap;

  		mymap['a']="an element";
  		mymap['b']="another element";
  		mymap['c']=mymap['b'];

  		std::cout << "mymap['a'] is " << mymap['a'] << '\n';
  		std::cout << "mymap['b'] is " << mymap['b'] << '\n';
  		std::cout << "mymap['c'] is " << mymap['c'] << '\n';
  		std::cout << "mymap['d'] is " << mymap['d'] << '\n';

  		std::cout << "mymap now contains " << mymap.size() << " elements.\n";

	}
}
std::cout << YELLOW << "\t===================================test rend/rbegin===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;

  		mymap['x'] = 100;
  		mymap['y'] = 200;
  		mymap['z'] = 300;

  		// show content:
  		std::map<char,int>::reverse_iterator rit;
  		for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
  		  std::cout << rit->first << " => " << rit->second << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;

  		mymap['x'] = 100;
  		mymap['y'] = 200;
  		mymap['z'] = 300;

  		// show content:
  		ft::map<char,int>::reverse_iterator rit;
  		for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
  		  std::cout << rit->first << " => " << rit->second << '\n';

	}
}
std::cout << YELLOW << "\t===================================test size===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;
  		mymap['a']=101;
  		mymap['b']=202;
  		mymap['c']=302;

  		std::cout << "mymap.size() is " << mymap.size() << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;
  		mymap['a']=101;
  		mymap['b']=202;
  		mymap['c']=302;

  		std::cout << "mymap.size() is " << mymap.size() << '\n';

	}
}
std::cout << YELLOW << "\t===================================test member.swap===================================" << RESET << std::endl;

{
	{
		std::cout << "std::map\n";
  		std::map<char,int> foo,bar;

  		foo['x']=100;
  		foo['y']=200;

  		bar['a']=11;
  		bar['b']=22;
  		bar['c']=33;

  		foo.swap(bar);

  		std::cout << "foo contains:\n";
  		for (std::map<char,int>::iterator it=foo.begin(); it!=foo.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

  		std::cout << "bar contains:\n";
  		for (std::map<char,int>::iterator it=bar.begin(); it!=bar.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> foo,bar;

  		foo['x']=100;
  		foo['y']=200;

  		bar['a']=11;
  		bar['b']=22;
  		bar['c']=33;

  		foo.swap(bar);

  		std::cout << "foo contains:\n";
  		for (ft::map<char,int>::iterator it=foo.begin(); it!=foo.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

  		std::cout << "bar contains:\n";
  		for (ft::map<char,int>::iterator it=bar.begin(); it!=bar.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
}

std::cout << YELLOW << "\t===================================test value_comp===================================" << RESET << std::endl;
{
	{
		std::cout << "std::map\n";
  		std::map<char,int> mymap;

  		mymap['x']=1001;
  		mymap['y']=2002;
  		mymap['z']=3003;

  		std::cout << "mymap contains:\n";

  		std::pair<char,int> highest = *mymap.rbegin();          // last element

  		std::map<char,int>::iterator it = mymap.begin();
  		do {
  		  std::cout << it->first << " => " << it->second << '\n';
  		} while ( mymap.value_comp()(*it++, highest) );
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> mymap;

  		mymap['x']=1001;
  		mymap['y']=2002;
  		mymap['z']=3003;

  		std::cout << "mymap contains:\n";

  		ft::pair<char,int> highest = *mymap.rbegin();          // last element

  		ft::map<char,int>::iterator it = mymap.begin();
  		do {
  		  std::cout << it->first << " => " << it->second << '\n';
  		} while ( mymap.value_comp()(*it++, highest) );

	}
}
std::cout << YELLOW << "\t===================================test swap===================================" << RESET << std::endl;
{
	{
		std::cout << "std::map\n";
  		std::map<char,int> foo,bar;

  		foo['x']=100;
  		foo['y']=200;

  		bar['a']=11;
  		bar['b']=22;
  		bar['c']=33;

  		swap(foo,bar);

  		std::cout << "foo contains:\n";
  		for (std::map<char,int>::iterator it=foo.begin(); it!=foo.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

  		std::cout << "bar contains:\n";
  		for (std::map<char,int>::iterator it=bar.begin(); it!=bar.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> foo,bar;

  		foo['x']=100;
  		foo['y']=200;

  		bar['a']=11;
  		bar['b']=22;
  		bar['c']=33;

  		swap(foo,bar);

  		std::cout << "foo contains:\n";
  		for (ft::map<char,int>::iterator it=foo.begin(); it!=foo.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

  		std::cout << "bar contains:\n";
  		for (ft::map<char,int>::iterator it=bar.begin(); it!=bar.end(); ++it)
  		  std::cout << it->first << " => " << it->second << '\n';

	}
}
std::cout << YELLOW << "\t===================================test relational operators===================================" << RESET << std::endl;
{
	{
		std::cout << "std::map\n";
  		std::map<char,int> foo,bar;
  		foo['a']=100;
  		foo['b']=200;
  		bar['a']=10;
  		bar['z']=1000;

  		// foo ({{a,100},{b,200}}) vs bar ({a,10},{z,1000}}):
  		if (foo==bar) std::cout << "foo and bar are equal\n";
  		if (foo!=bar) std::cout << "foo and bar are not equal\n";
  		if (foo< bar) std::cout << "foo is less than bar\n";
  		if (foo> bar) std::cout << "foo is greater than bar\n";
  		if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
  		if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";
	}
	{
		std::cout << "ft::map\n";
  		ft::map<char,int> foo,bar;
  		foo['a']=100;
  		foo['b']=200;
  		bar['a']=10;
  		bar['z']=1000;

  		// foo ({{a,100},{b,200}}) vs bar ({a,10},{z,1000}}):
  		if (foo==bar) std::cout << "foo and bar are equal\n";
  		if (foo!=bar) std::cout << "foo and bar are not equal\n";
  		if (foo< bar) std::cout << "foo is less than bar\n";
  		if (foo> bar) std::cout << "foo is greater than bar\n";
  		if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
  		if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";
	}
}
}
	return 0;
}
