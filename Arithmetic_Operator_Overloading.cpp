#include<iostream>
class Example
{
  public:
  int a;
  int b;
  Example ()
   {
    
    }
  Example (int x,int y)
  {
	  this->a=x;
    this->b=y;
  }

   Example & operator+ (const Example & other)
  {
    Example *p =(Example*)malloc(sizeof(Example));
    p->a=this->a+other.b;
     p->b=this->b+other.b;
    return *p;
   }
  Example & operator-(const Example & other)
  {
    Example *p =(Example*)malloc(sizeof(Example));
    p->a=(this->a)-other.a;
     p->b=(this->b)-other.b;
    return *p;
   }
  
  Example & operator*(const Example & other)
  {
    Example *p=(Example *)malloc(sizeof(Example));
    p->a=(this->a)*(other.a);
     p->b=(this->b)*(other.b);
    return *p;
   }
  Example & operator/(const Example & other)
  {
    Example *p=(Example*)malloc(sizeof(Example));
    p->a=(this->a)/(other.a);
    p->b=(this->b)/(other.b);
    return *p;
   }

    Example & operator%(const Example & other)
  {
    Example *p=(Example*)malloc(sizeof(Example));
    p->a=(this->a)%(other.a);
    p->b=(this->b)%(other.b);
    return *p;
   }

  void show_data()
  {
	  std::cout<<a<<std::endl;
	  std::cout<<b<<std::endl;
  }
};

int main()
{
	Example obj1(50, 25);
	std::cout<<"First Object Data Is"<<std::endl;
	obj1.show_data();
	Example obj2(98, 99);
	std::cout<<"Second Object Data Is"<<std::endl;
	obj2.show_data();

  
	 std::cout<<" + operator overloading"<<std::endl;
	 Example add= obj1 + obj2;
	 add.show_data();

	 std::cout<<" - operator overloading"<<std::endl;
	 Example sub= obj1 - obj2;
	 sub.show_data();

	 std::cout<<" * operator overloading"<<std::endl;
	 Example mul= obj1 * obj2;
	 mul.show_data();

	 std::cout<<" / operator overloading"<<std::endl;
	 Example div= obj1 / obj2;
	 div.show_data();

	 std::cout<<" % operator overloading"<<std::endl;
	 Example mod= obj1 % obj2;
	 mod.show_data();

   return 0;
}