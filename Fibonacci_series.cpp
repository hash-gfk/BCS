/******Fibonacci series******/

#include <iostream>
using namespace std;
int fibo(int n)
{                           // base condition- agar n<=1 hai then compiler will return n itself and also recursion will stop
                            // dry run:  let say n=5 hai
    if (n <= 1)                 // then step 1: 5>1, so fibo(4)+ fibo(3)
                        // step 2: 4>1 and 3>1 like this recursion keeps going untill the base condition arrives
    {
        return n;
    }
    return (fibo(n - 1) + fibo(n - 2));
}
int main()
{
    int a;
    cout << "Enter the term at which you want the fibonacci number " << endl;
    cin >> a;
    cout << "the " << " " << a << " " << "term of fibonacci number series is" << " " << fibo(a) << endl;
    return 0;
}