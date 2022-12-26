// overload the shorthand operator

#include<iostream>
class Example
{
  public:
   int a,b;
   Example (int x, int y)
   {
    this->a=x;
    this->b=y;
    }
  void operator+=(const Example & other)
  {
    (this->a)+=other.a;
    (this->b)+=other.b;
  }

   void operator-=(const Example & other)
  {
    (this->a)-=other.a;
    (this->b)-=other.b;
  }
   void show_data()
   {
	   std::cout<<a<<std::endl;
	   std::cout<<b<<std::endl;
   }

 };

int main()
{
   Example obj1(100,2);
   Example  obj2(110,210);
    obj1.show_data();
   std::cout<<"+= Overloading"<<std::endl;
  // after the overloading 
  obj1.operator+=(obj2);        // d.operator++();
   obj1.show_data();

   std::cout<<std::endl;

  Example obj3(10, 9);
  Example  obj4(80,90);
  obj3.show_data();
  std::cout<<"-= Overloading"<<std::endl;
  obj3.operator-=(obj4);  
   // after the overloading   // d3.operator-=(d4)
  obj3.show_data();

return 0;
}

