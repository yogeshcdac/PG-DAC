#include "Rect.h"
#include "Circle.h"
#include "Square.h"
int main()
{
//Shape obj;
//Shape *sp = new Rect;
//sp->Accept();

	Shape *s = NULL;
         Rect r;
	Circle c;
	Square b;
	//Rectanle function
	s = &r; // upcasting
	s->Accept();
    float a= s->CalcArea();
    cout<<"\n Rectangle Area is ="<<a;
	
	//Circle function
	s = &c; // upcasting
	s->Accept();
    a= s->CalcArea();
    cout<<"\n Circle Area is ="<<a;
	
     //square function
     s = &b;
     s->Accept();
    a= s->CalcArea();
    cout<<"\n Square Area is ="<<a;
      

	
	return 0;

}

