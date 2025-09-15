// date 11/09/2025

#include <iostream>
#include <stdio.h>

using namespace std;

class rectangle{
            int length ,breadth;
    public:
    //mutators
            void setlength(int l)
            {
                length=l;
            }
            void setbreadth(int b)
            {
                breadth=b;
            }
       
    // default constructor
         rectangle()  
         {
            length=1;
            breadth=1;
         }
        // parametrized constructor
         rectangle(int a,int b)  
         {
            length=a;
            breadth=b;
         }

            int area()
            {
                return length*breadth;
            }
            int perimeter()
            {
                return 2*(length+breadth);
            }

};
int main()
{
    rectangle r(2,3);
    cout <<  r.area()<< endl;
    cout<<  r.perimeter()<< endl;
}