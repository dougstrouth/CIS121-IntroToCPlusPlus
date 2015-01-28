#include <iostream>
using namespace std;

int remainder(int x, int y)
{int r;
r=x-((x/y)*y);
return r;
}

int main ()
{int dividend, divisor;
cout <<"Enter a dividend and then a divisor to find the remainder "<<'\n';
cout<<"Enter the dividend: ";
cin >> dividend;
cout<< "Enter the divisor: ";
cin>>divisor;
cout <<"the remainder is " <<remainder(dividend, divisor)<<'\n';


return 0;
}
