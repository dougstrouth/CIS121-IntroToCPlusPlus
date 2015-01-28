#include <iostream>
using namespace std;
int main()
{ int number;
int digit1, digit2, digit3; // place holders for the digits.
cout << "Type a three digit number\n";
cin >> number;
// your code here
digit3=number%10; //gets us the last digit because the remainder would be in the ones place ex: 345/10=34r5 so this line would make digit3=5
number= number/10; //this brings number down to only 2 digits because it cuts off the remainder we found in line 9. ex: now number=34
digit2=number%10; //ex:34/10=3r4 and this line assigns that remainder to digit2=4
number= number/10; //brings the value assigned to number down another digit like in line 10. ex: number=3
digit1=number%10; //ex: 3/10=0r3 so this now assigns digit1=3
cout <<digit1 <<" "<< digit2 <<" "<< digit3 << endl;


return 0;
}
