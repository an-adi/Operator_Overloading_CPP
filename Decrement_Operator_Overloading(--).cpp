//decrement operator overloading
#include<iostream>
class Example
{
  public:
   int a,b;
   Example(int x, int y)
   {
	   this->a=x;
      this->b=y;
    }
  void operator--()
  {
     (this->a)--;
     (this->b)--;

  }
  void show_data()
  {
	  std::cout<<a<<std::endl;
	  std::cout<<b<<std::endl;
  }
   
 };

int main()
{
   Example obj1(99,199);
   obj1.show_data();
  // after the overloading of decrement operator
  obj1.operator--();        // obj1.operator++();
  std::cout<<"After decreamenting"<<std::endl;
  obj1.show_data();

return 0;
}

