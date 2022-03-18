// MIT License
// 
// Copyright (c) 2021 Youness Farini
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// 

#include "helpers.hpp"

int main()
{
    
         # define UsedType test
        {
            printf("%-40s","Resize 1:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(5);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(5);
            a.resize(2);
            b.resize(2);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
            printf("%-40s","Resize 2:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(5);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(5);
            a.resize(0);
            b.resize(0);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();

        # define UsedType test
        {
          
            printf("%-40s","Resize 4:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            a.resize(15);
            b.resize(15);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
          
            printf("%-40s","Resize 4:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            a.resize(0);
            b.resize(0);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
          
            printf("%-40s","Resize 5a: (depends on reserve)");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(2);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(2);
            a.reserve(150);
            b.reserve(150);
            a.resize(151);
            b.resize(151);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
          
            printf("%-40s","Resize 5b: (depends on reserve)");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(2);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(2);
            a.reserve(15);
            b.reserve(15);
            a.resize(15);
            b.resize(15);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
          
            printf("%-40s","Resize 6:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(7);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(7);
            a.resize(15);
            b.resize(15);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
          
            printf("%-40s","Resize 7:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(8);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(8);
            a.resize(15);
            b.resize(15);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType
       
    
}