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
                    printf("%-40s","insert random ints:");
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
                        a.insert(a.begin()+z, arr+12, arr+12+y);
                        b.insert(b.begin()+z, arr+12, arr+12+y);
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
                    printf("%-40s","insert random strings:");
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
                        a.insert(a.begin()+z, arr+12, arr+12+y);
                        b.insert(b.begin()+z, arr+12, arr+12+y);
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



        # define UsedType int
        {
            printf("%-40s","insert range(9) begin of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+24);
                b.insert(b.begin(), arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","insert range(11) begin of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+26);
                b.insert(b.begin(), arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","insert range(10) end of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+25);
                b.insert(b.end(), arr+15, arr+25);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        # define UsedType int
        {
            printf("%-40s","insert range(9) end of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+24);
                b.insert(b.end(), arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","insert range(11) end of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+26);
                b.insert(b.end(), arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType

        


        # define UsedType test
        {
            printf("%-40s","insert range(10) begin of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+25);
                b.insert(b.begin(), arr+15, arr+25);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        # define UsedType test
        {
            printf("%-40s","insert range(9) begin of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+24);
                b.insert(b.begin(), arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType test
        {
            printf("%-40s","insert range(11) begin of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+26);
                b.insert(b.begin(), arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType test
        {
            printf("%-40s","insert range(10) end of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+25);
                b.insert(b.end(), arr+15, arr+25);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        # define UsedType test
        {
            printf("%-40s","insert range(9) end of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+24);
                b.insert(b.end(), arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType test
        {
            printf("%-40s","insert range(11) end of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+26);
                b.insert(b.end(), arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType





        # define UsedType test
        {
            printf("%-40s","insert range(10) begin+5 of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin()+5, arr+15, arr+25);
                b.insert(b.begin()+5, arr+15, arr+25);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        # define UsedType test
        {
            printf("%-40s","insert range(9) begin+5 of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin()+5, arr+15, arr+24);
                b.insert(b.begin()+5, arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType test
        {
            printf("%-40s","insert range(11) begin+5 of vector(10):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin()+5, arr+15, arr+26);
                b.insert(b.begin()+5, arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        



         # define UsedType test
        {
            printf("%-40s","insert range(10) begin of vector(0):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+25);
                b.insert(b.begin(), arr+15, arr+25);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        # define UsedType test
        {
            printf("%-40s","insert range(9) begin of vector(0):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+24);
                b.insert(b.begin(), arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType test
        {
            printf("%-40s","insert range(11) begin of vector(0):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.begin(), arr+15, arr+26);
                b.insert(b.begin(), arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType test
        {
            printf("%-40s","insert range(10) end of vector(0):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+25);
                b.insert(b.end(), arr+15, arr+25);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




        # define UsedType test
        {
            printf("%-40s","insert range(9) end of vector(0):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+24);
                b.insert(b.end(), arr+15, arr+24);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType


        # define UsedType test
        {
            printf("%-40s","insert range(11) end of vector(0):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a;
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b;
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                a.insert(a.end(), arr+15, arr+26);
                b.insert(b.end(), arr+15, arr+26);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType
    






        ///////////////////////////////////
        # define UsedType int
        {
            printf("%-40s","insert range(10) begin (InputIterator):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                InputIterator<UsedType>::next = arr + 16;
                InputIterator<UsedType> start(arr+15);
                InputIterator<UsedType> end(arr + 25);
                a.insert(a.begin(), start, end);
                InputIterator<UsedType>::next = arr + 16;
                b.insert(b.begin(), start, end);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




       # define UsedType int
        {
            printf("%-40s","insert range(9) begin (InputIterator):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                InputIterator<UsedType>::next = arr + 16;
                InputIterator<UsedType> start(arr+15);
                InputIterator<UsedType> end(arr + 24);
                a.insert(a.begin(), start, end);
                InputIterator<UsedType>::next = arr + 16;
                b.insert(b.begin(), start, end);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","insert range(11) begin (InputIterator):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                InputIterator<UsedType>::next = arr + 16;
                InputIterator<UsedType> start(arr+15);
                InputIterator<UsedType> end(arr + 26);
                a.insert(a.begin(), start, end);
                InputIterator<UsedType>::next = arr + 16;
                b.insert(b.begin(), start, end);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","insert range(10) end (InputIterator):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                InputIterator<UsedType>::next = arr + 16;
                InputIterator<UsedType> start(arr+15);
                InputIterator<UsedType> end(arr + 25);
                a.insert(a.end(), start, end);
                InputIterator<UsedType>::next = arr + 16;
                b.insert(b.end(), start, end);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType




       # define UsedType int
        {
            printf("%-40s","insert range(9) end (InputIterator):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                InputIterator<UsedType>::next = arr + 16;
                InputIterator<UsedType> start(arr+15);
                InputIterator<UsedType> end(arr + 24);
                a.insert(a.end(), start, end);
                InputIterator<UsedType>::next = arr + 16;
                b.insert(b.end(), start, end);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType



        # define UsedType int
        {
            printf("%-40s","insert range(11) end (InputIterator):");
            UsedType arr[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            std::vector<UsedType, myCustomAllocator<UsedType, std::vector<UsedType> > > a(arr, arr + 10);
            ft::vector<UsedType, myCustomAllocator<UsedType, ft::vector<UsedType> > > b(arr, arr + 10);
            if (check_equal(a, b) != EQUAL)
            {
                printf("%-40s","❌ Error: couldn't test the insert range: range constructor is incorrect\n");
                error = true;
            }
            else
            {
                InputIterator<UsedType>::next = arr + 16;
                InputIterator<UsedType> start(arr+15);
                InputIterator<UsedType> end(arr + 26);
                a.insert(a.end(), start, end);
                InputIterator<UsedType>::next = arr + 16;
                b.insert(b.end(), start, end);
                print_res(check_equal(a, b));
            }
        }
        if (!error)
            print_leaks<UsedType>();
        error = false;
        #undef UsedType





}