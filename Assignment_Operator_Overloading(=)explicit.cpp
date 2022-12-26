#include <iostream>
//overloading means it has predefined work but we give some extra task to do 
//aasignment operator overloading means assigmrnt (=) has one work to assign values to primitive we give it to assigned for object
class Example
{
    public:
		int a;
		int b ;
		int c;
		int *p;
		Example ()
		{
		 
		}
		Example (int x, int y, int z , int q): a(x), b(y), c(z)
	{
		(this->p)=(int *) malloc(sizeof(int));
       *(this->p)=q;
	}
		void show_a1_data()
		{
			std::cout<<a<<std::endl;
			std::cout<<b<<std::endl;
			std::cout<<c<<std::endl;
			std::cout<<*p<<std::endl;
		}

	Example& operator = ( const Example  &other) //Example is data return type & is used to return at address and other is reference var..
	{

		 this->a=other.a;
		 this->b=other.b;
		 this->c=other.c;
		 (this->p)=(int *)malloc(sizeof(int));
		 *(this->p)=*(other.p);
		 return *this; //this return type is must beacause a=b=c=d here we give return values after operator overloading to main function
	}

	void show_a2__data()
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
		std::cout<<c<<std::endl;
		std::cout<<*p<<std::endl;
	}

};

int main()
{
	Example a1(85, 56, 58, 5880);
	std::cout<<"Original Object Output"<<std::endl;
	a1.show_a1_data();
	Example a2;
    a2=a1; //aggignment operator overloading 
	std::cout<<"After Copy Output by Assignment Operator"<<std::endl;
	a2.show_a2__data();

	return 0;
}
