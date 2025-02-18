#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    for (int i = 0; i < N; i++)                 //* * * * *
    {                                           //* * * * *
        for (int j = 0; j < N; j++)             //* * * * *
        {                                       //* * * * *
            cout << "* ";                       //* * * * *
        }
        cout << endl;
    }
}

void pattern2(int N)
{
    for (int i = 0; i < N; i++)                 //*
    {                                           //* *
        for (int j = 0; j <= i; j++)            //* * *
        {                                       //* * * *    
            cout << "* ";                       //* * * * *
        }
        cout << endl;
    }
}

void pattern3(int N)
{
    for (int i = 1; i <= N; i++)                //1
    {                                           //1 2
        for (int j = 1; j <= i; j++)            //1 2 3
        {                                       //1 2 3 4
            cout << j << " ";                   //1 2 3 4 5
        }
        cout << endl;
    }
}

void pattern4(int N)
{
    for (int i = 1; i <= N; i++)                //1
    {                                           //2 2
        for (int j = 1; j <= i; j++)            //3 3 3 
        {                                       //4 4 4 4
            cout << i << " ";                   //5 5 5 5 5 
        }
        cout << endl;
    }
}

void pattern5(int N)
{
    for (int i = 0; i < N; i++)                 //* * * * *
    {                                           //* * * *
        for (int j = 0; j < N-i; j++)           //* * *
        {                                       //* *
            cout << "* ";                       //*
        }
        cout << endl;
    }
}

void pattern6(int N)
{
    for (int i = 0; i < N; i++)                 //1 2 3 4 5
    {                                           //1 2 3 4
        for (int j = 1; j <= N-i; j++)          //1 2 3 
        {                                       //1 2
            cout << j << " ";                   //1
        }
        cout << endl;
    }
}

void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N-i-1; j++)
        {
            cout << " ";                    //     *  
        }                                   //    ***
        for (int j = 0; j <= 2*i; j++)      //   ***** 
        {                                   //  *******
            cout << "*";                    // *********
        }
        for (int j = 0; j <= N-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";                          // *********    
        }                                         //  *******
        for (int j = 0; j < 2*N-(2*i+1); j++)     //   ***** 
        {                                         //    ***
            cout << "*";                          //     *
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int N)
{
    for (int i = 1; i < 2*N; i++)               //*
    {                                           //* *
        int stars = i;                          //* * *
        if(i>N) stars = 2*N -i;                 //* * * *    
        for (int j = 0; j < stars; j++)         //* * * * *
        {                                       //* * * *
            cout << "* ";                       //* * * 
        }                                       //* *
        cout << endl;                           //*
    }
}

void pattern11(int N)
{
    int start = 1;
    for (int i = 0; i < N; i++)              
    {                                           //1
        if(i%2==0) start = 1;                   //1 0
        else start = 0;                         //1 0 1
        for (int j = 0; j <= i; j++)            //1 0 1 0
        {                                       //1 0 1 0 1 
            cout << start; 
            start = 1-start;                   
        }                                    
        cout << endl;                          
    }
}

void pattern12(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N-i-1; j++)
        {
            cout << j;                     
        }                                   // 12344321
        for (int j = 1; j <= 2*i; j++)      // 123  321 
        {                                   // 12    21
            cout << " ";                    // 1      1
        }
        for (int j = 1; j <= N-i-1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int N)
{
    int num = 1;
    for (int i = 1; i <= N; i++)                //1
    {                                           //2 3
        for (int j = 1; j <= i; j++)            //4 5 6 
        {                                       //7 8 9 10
            cout << num << " ";                 //11 12 13 14 15 
            num = num+1;                        
        }
        cout << endl;
    }
}

void pattern14(int N)
{
    for (int i = 1; i <= N; i++)                  //A
    {                                             //A B
        for (char ch = 'A'; ch < 'A'+i; ch++)     //A B C 
        {                                         //A B C D
            cout << ch << " ";                    //A B C D E 
        }
        cout << endl;
    }
}

void pattern16(int N)
{
    for (int i = 0; i < N; i++)                  //A
    {                                            //B B
        char ch = 'A'+i;                         //C C C
        for (int j = 0; j <= i; j++)             //D D D D
        {                                        //E E E E E
            cout << ch << " ";                    
        }
        cout << endl;
    }
}

void pattern17(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N-i-1; j++)
        {
            cout << " ";                    //     A  
        }                                   //    ABC
        for (int j = 0; j <= 2*i; j++)      //   ABCAB 
        {                                   //  ABCABCA
            cout << char('A'+(j%3));        // ABCABCABC
        }
        for (int j = 0; j <= N-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int N)
{ 
    for (int i = 0; i < N; i++)                               //E
    {                                                         //D E
        for (char ch = ('A'+N-1)-i; ch <= ('A'+N-1); ch++)    //C D E 
        {                                                     //B C D E
            cout << ch << " ";                                //A B C D E 
        }
        cout << endl;
    }
}

void pattern20(int N)
{ 
    for (int i = 0; i < N; i++)                              
    {                                                       
        for (int j = 0; j < N; j++)                      //*****       
        {                                                //*   *
            if(i==0 || j==0 || i==N-1 || j==N-1)         //*   *
                cout << "*";                             //*   *
            else                                         //*****
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{   
   
    int N = 5;

    pattern1(N);
    
    pattern2(N);
    
    pattern3(N);
    
    pattern4(N);
    
    pattern5(N);
    
    pattern6(N);
    
    pattern7(N);
    
    pattern8(N);
    
    pattern7(N);
    pattern8(N);
    
    pattern10(N);
    
    pattern11(N);
    
    pattern12(N);
   
    pattern13(N);
    
    pattern14(N);
    
    pattern16(N);
    
    pattern17(N);
    
    pattern18(N);
    
    pattern20(N);
    
    return 0;
}