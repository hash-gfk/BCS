/****** Factorial ******/

#include <iostream>
using namespace std;
int factorial(int n)                //base condition isme hai ki agar n<=1 hai toh factorial '1' hoga
{                                   // meaning jab dry run karenge code ko then let say 
    if (n <= 1)                     // n=3, then step 1: 3>1, so general return statement applies, 3*factorial(2),                            
    {                               //3*(2*factorial(1)), toh phir 3*(2*(1*factorial(0))) = 6
        return 1;                   // aur basically yeh recursion tabh tak chlti jayegi jab tak n=0 nahi ho jata 
    }
    return (n * factorial(n - 1));
}
int main()
{
    int a;
    cout << "enter the number";
    cin >> a;
    cout << "the factorial of" << " " << a << " " << "is" <<" "<< factorial(a);
    return 0;
}