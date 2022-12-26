// unary + ,  - operator overloading

#include<iostream>

class Example
 {
  public:
   int a;
   int b;

   Example(int x, int y)
   {
	   this->a=x;
       this->b=y;
    }

   void operator-()
   {
     (this->a)= -(this->a);
     (this->b)= -(this->b);
    }

      void operator+()
    {
     (this->a)=+(this->a);
     (this->b)=+(this->b);
    }
	  void show_data()
	  {
		  std::cout<<a<< "  "<< b << std::endl;
	  }
};
int main()
{
   Example obj1(10, 20);
    obj1.show_data();
	std::cout<<std::endl;
   std::cout<<"Before Use Of - unary operator"<<std::endl;
   obj1.show_data();
   obj1.operator-();
   std::cout<<"After Use Of - unary operator"<<std::endl;
   obj1.show_data();
   std::cout<<std::endl;

   std::cout<<"Before Use Of + unary operator "<<std::endl;
   Example obj2(-110, 220);
   	obj2.show_data();
	obj2.operator+();
	std::cout<<"After Use Of - unary operator"<<std::endl;
	obj2.show_data();

return 0;
}