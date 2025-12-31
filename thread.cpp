#include <iostream>
#include <ranges>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    long long result=1;
    for(int i=2;i<=n;i++)
    result*=i;

    cout<<"Factorial of n is "<<result<<endl;
}
int main() {
   
   thread t1(fun,6), t2(fun,7);
   t1.join();
   cout<<endl;
   t2.join();
   return 0;
}