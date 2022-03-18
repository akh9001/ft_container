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
    
        # define UsedType int
        {
            printf("%-40s","Default Constructor (int): ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
            printf("%-40s","Default Constructor (class): ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType int
        {
            printf("%-40s","Default Constructor const vector1: ");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
            printf("%-40s","Default Constructor const vector2: ");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType int
        {
            printf("%-40s","Constructor  size, n(int)1: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(55, 5);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(55, 5);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType int
        {
            printf("%-40s","Constructor  size, n(int)2: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(0, UsedType());
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(0, UsedType());
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

         # define UsedType int
        {
            printf("%-40s","Constructor  size, n(int)3: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(5);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(5);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType test
        {
            printf("%-40s","Constructor  size, n(class)1: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(55, 5);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(55, 5);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
            printf("%-40s","Constructor  size, n(class)2: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(0, UsedType());
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(0, UsedType());
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType test
        {
            printf("%-40s","Constructor  size, n(class)3: ");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(10, UsedType());
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(10, UsedType());
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType int
        {
            UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            InputIterator<UsedType>::next = arr + 1;
            InputIterator<UsedType> start(arr);
            InputIterator<UsedType> end(arr + 6);
            printf("%-40s","Constructor  range int (inputIterator)");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(start, end);
            InputIterator<UsedType>::next = arr + 1;
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(start, end);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType test
        {
            UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            InputIterator<UsedType>::next = arr + 1;
            InputIterator<UsedType> start(arr);
            InputIterator<UsedType> end(arr + 6);
            printf("%-40s","Constructor  range class (inputIterator)");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(start, end);
            InputIterator<UsedType>::next = arr + 1;
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(start, end);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType int
        {
            UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            printf("%-40s","Constructor  range int (randomAccessIt)");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 6);
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 6);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType

        # define UsedType test
        {
            UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            printf("%-40s","Constructor  range class(randomAccessIt)");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 6);
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 6);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType test
        {
            UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            printf("%-40s","Constructor  range class(randomAccessIt)");
            const std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 6);
            const ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 6);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","Constructor vector(int)3: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > va;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > vb;

            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(va);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(vb);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","Constructor vector(int)3: ");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > va(5);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > vb(5);

            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(va);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(vb);
            print_res(check_equal(a, b));
        }
        print_leaks<UsedType>();
        #undef UsedType
    
}