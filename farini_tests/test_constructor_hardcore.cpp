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
        printf("%-40s","Default Constructor (class) fail: ");
        max_to_fail = 400;
        int x = 0;
        int y = 0;
        try
        {
            UsedType::total_constr_size = 0;
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(50);
        }
        catch(...){
            x = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        try
        {
            UsedType::total_constr_size = 0;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(50);
        }
        catch(...){
            y = UsedType::constructed_size;
            UsedType::constructed_size = y;
        }
        
        print_destructs(x, y);
    }
    print_leaks<UsedType>();
    #undef UsedType



    # define UsedType test
    {

        printf("%-40s","Range Constructor inputIt fail: ");
        int x = 0;
        int y = 0;
        max_to_fail = 400;
        UsedType::constructed_size = 0;
        UsedType::total_constr_size = 0;
        UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        max_to_fail = 8;
        try
        {
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            InputIterator<UsedType>::next = arr + 1;
            InputIterator<UsedType> start(arr);
            InputIterator<UsedType> end(arr + 10);
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(start, end);
        }
        catch(...){
            x = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        try
        {
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            InputIterator<UsedType>::next = arr + 1;
            InputIterator<UsedType> start(arr);
            InputIterator<UsedType> end(arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > a(start, end);
        }
        catch(...){

            y = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        
        print_destructs(x, y);
    }
    print_leaks<UsedType>();
    #undef UsedType


    # define UsedType test
    {
        printf("%-40s","Range Constructor randomIt fail: ");
        int x = 0;
        int y = 0;
        max_to_fail = 400;
        UsedType::constructed_size = 0;
        UsedType::total_constr_size = 0;
        UsedType arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        max_to_fail = 8;
        try
        {
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr+8);
        }
        catch(...){
            x = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        try
        {
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > a(arr, arr+8);
        }
        catch(...){

            y = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        
        print_destructs(x, y);
    }
    print_leaks<UsedType>();
    #undef UsedType



    # define UsedType test
    {
        printf("%-40s","Range Constructor vector fail: ");
        int x = 0;
        int y = 0;
        max_to_fail = 400;
        UsedType::constructed_size = 0;
        UsedType::total_constr_size = 0;
        std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > va(15);
        ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > vb(15);

        max_to_fail = 8;
        try
        {
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(va);
        }
        catch(...){
            x = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        try
        {
            UsedType::constructed_size = 0;
            UsedType::total_constr_size = 0;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(vb);
        }
        catch(...)
        {
            y = UsedType::constructed_size;
            UsedType::constructed_size = 0;
        }
        
        print_destructs(x, y);
    }
    print_leaks<UsedType>();
    #undef UsedType

}