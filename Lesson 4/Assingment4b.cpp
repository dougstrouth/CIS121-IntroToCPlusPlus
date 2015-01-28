//
//  main.cpp
//  Project 4B
//
//  Created by Doug Strouth on 10/17/14.
//  Copyright (c) 2014 Doug Strouth. All rights reserved.
//

#include <iostream> 
using namespace std;

int main ()
{ int a, b, c, temp, temp2;
    cin >>a>>b>>c;
    if (a<b){
    temp=a;
    a=b;
    b=temp;
    }
    if (b<c){
        temp2=b;
        b=c;
        c=temp2;
    }
    if (a<b){
        temp=a;
        a=b;
        b=temp;
    }
cout<<"The numbers in descending order are "<<a<<", "<<b<<", "<<c<<endl;
return 0;
        }
