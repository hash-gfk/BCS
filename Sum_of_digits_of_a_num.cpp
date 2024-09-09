/*** Sum of Digits of a Number ***/

#include <iostream>
using namespace std;
int main()
{
    int n, remainder;                           //dry run: let say n=124
    int sum = 0;                        // step 1: n=124, 124!=0, remainder= 124%10=4, sum = 0+4 =4, num= 124/10=12
    cout << "enter the number" << endl;     // step2: n=12 , rem= 12%10=2, sum =4+ 2=6, num =12/10=1
    cin >> n;                                  //step3: n=1, rem= 1%10=1, sum= 6+ 1=7, num = 1/10=0
    int num = n;                                // step4: n=0 toh phir idhar hi loop ruk jayega
    while (num != 0)                                    // hence sum=7
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    cout << "the sum of digits of" << " "<<n<<" "<< "is" << " " << sum << endl;
    return 0;
}