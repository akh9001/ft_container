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
        bool error = false; 
        for (int x = 0; x  < 16; x++)
        {
            for (int y = 0; y  < 16; y++)
            for (int z = 0; z  <= x; z++)
            {
            {
         
        # define UsedType int
                {
                    printf("%-40s %02d %02d %02d","insert random ints:", x, y, z);
                    UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
                    std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + x);
                    ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + x);
                    if (check_equal(a, b) != EQUAL)
                    {
                        printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                        error = true;
                    }
                    else
                    {
                        a.insert(a.begin()+z, y, *(arr+12+y));
                        b.insert(b.begin()+z, y, *(arr+12+y));
                        std::cout << a.size() << " ";
                        print_res(check_equal(a, b));
                    }
                }
                if (!error)
                    print_leaks<UsedType>();
                error = false;
        #undef UsedType
            }
            }
        } 

        for (int x = 0; x  < 16; x++)
        {
            for (int y = 0; y  < 16; y++)
            for (int z = 0; z  <= x; z++)
            {
            {
         
        # define UsedType std::string
                {
                    printf("%-40s %02d %02d %02d","insert random strings:", x, y, z);
                    UsedType arr[]= {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30"};
                    std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + x);
                    ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + x);
                    if (check_equal(a, b) != EQUAL)
                    {
                        printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                        error = true;
                    }
                    else
                    {
                        a.insert(a.begin()+z, y, *(arr+12+y));
                        b.insert(b.begin()+z, y, *(arr+12+y));
                        std::cout << a.size() << " ";
                        print_res(check_equal(a, b));
                    }
                }
                if (!error)
                    print_leaks<UsedType>();
                error = false;
        #undef UsedType
            }
            }
        } 

}