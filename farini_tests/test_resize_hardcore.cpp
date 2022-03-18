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
            int x = 0;
            int y = 0;
            printf("%-40s","Resize Hardcore 1:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(2);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(2);
            max_to_fail = 8;
            try
            {
                UsedType::constructed_size = 0;
                UsedType::total_constr_size = 0;
                a.resize(15);
            }
            catch(...)
            {

                x = UsedType::constructed_size + 1;
                UsedType::constructed_size = 0;
            }
            
             try
            {
                UsedType::constructed_size = 0;
                UsedType::total_constr_size = 0;
                b.resize(15);
            }
            catch(...)
            {
                y = UsedType::constructed_size + 1;
                UsedType::constructed_size = 0;
            }
            print_destructs(x, y);
            print_res(check_equal(a, b));

        }
        print_leaks<UsedType>();
        #undef UsedType


        # define UsedType test
        {
            int x = 0;
            int y = 0;
            max_to_fail = 80000;
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            printf("%-40s","Resize Hardcore (depends on reserve)2:");
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(2);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(2);
            a.reserve(25);
            b.reserve(25);
            max_to_fail = 8;
            try
            {
                UsedType::constructed_size = 0;
                UsedType::total_constr_size = 0;
                a.resize(15);
            }
            catch(...)
            {

                x = UsedType::constructed_size + 1;
                UsedType::constructed_size = 0;
            }
            
             try
            {
                UsedType::constructed_size = 0;
                UsedType::total_constr_size = 0;
                b.resize(15);
            }
            catch(...)
            {
                y = UsedType::constructed_size + 1;
                UsedType::constructed_size = 0;
            }
            print_destructs(x, y);
            print_res(check_equal(a, b));

        }
        print_leaks<UsedType>();
        #undef UsedType

}