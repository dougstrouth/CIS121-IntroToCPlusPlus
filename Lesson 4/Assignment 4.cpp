#include <iostream>
using namespace std;

int area (int length, int width) 
{ int area;
	area =length*width;
	return area;	
}

int perimeter (int length, int width)
{ int perimeter;
	perimeter=(2*length)+(2*width);
	return perimeter;
}
int main () 

{
int length, width;
cout<<"Enter the length and then width:"<<endl;	
cin >> length>>width;

if (width<0||length<0)
	cout<<"Please make sure your measurements aren't negative!";
else 
{cout<<"The area of the rectangle is "<<area(length,width)<<endl;
cout<<"The perimeter of the rectangle is "<<perimeter(length,width)<<endl;
}

return 0;
}
