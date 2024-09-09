/***Swapping numbers using pointer or reference variables***/



#include<iostream>
using namespace std;
void swap_pointer(int* a,int* b){
        int temp= *a;
        *a =*b;             // basically idhar pointers isliye use kiya taki hum variables ko consider nahi kare balki
                        // values at address of variables concept use kare
         *b = temp;                        
         //  ye humne pointers se dereference karke kiya hai
         // meaning *a(value at address of a) = *b (value at address of b)
       
    }
    void swap_reference(int& a, int& b){
        int temp = a;
        a=b;                    // idhar hume address nahi likna hai kyuki reference mein variables same object ko point karte hai 
        b= temp;
    }
int main(){
    int x,y;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    cout<<"Before swapping:"<<endl;
    cout<<"x is"<<" "<<x<<" "<<" "<<" "<<"y is"<<" "<<y<<endl;
    swap_pointer(&x,&y);            
    // swap_reference(x,y);                 // reference variable mein agar int &a=b , then a and b ek hi object ko point karenge
                                            // agar b ki value change hogi then a ki automatically change hogi , so vica versa 
                                            // reference mein simple 
    cout<<"After swapping:"<<endl;
    cout<<"x is"<<" "<<x<<" "<<" "<<" "<<"y is"<<" "<<y<<endl;
    return 0;
}