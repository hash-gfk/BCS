
/********Calculator using Functions *********/

#include <iostream>
using namespace std;                   // if else statements use kari hai 
int AD, SB, MT;                        // we can also use switch
float DV;                              //in switch instead of else if cases are there and instead of else , default is present
int add(int x, int y)
{
   AD = (x + y);                    // idhar int main ke pehle humne function definitions likhdi
   return AD;
};
int sub(int x, int y)
{
   SB = (x - y);
   return SB;
};
int mul(int x, int y)
{
   MT = (x * y);
   return MT;
};
float dvd(float x, float y)
{
   DV = (x / y);
   return DV;
};
int main()
{
   float a, b;
   cout << "enter numbers";
   cin >> a >> b;
   char op;
   cout << "enter the operation among AD(addition '+') , SB(subtraction '-') , MT(multiply '*') , DV(divide '/')";
   cin >> op;
   add(a, b);
   sub(a, b);     // function call
   mul(a, b);
   dvd(a, b);
   if (op == '+')
   {
      cout <<"the sum is"<<" "<< AD;
   }
   else if (op == '-')
   {
      cout <<"the difference is"<<" "<< SB;
   }                                                                    
   else if (op == '*')              
   {
      cout <<"the product is"<<" "<< MT;
   }
   else if (op == '/')
   {
      cout <<"the quotient is"<<" "<< DV;
   }
   else
   {
      cout << "ERROR";
   }
   return 0;
}