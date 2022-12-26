#include <iostream>
 class Example 
 {
 public:
	 int a;
	 int b; 
	 int c; 
	 int d;
	 
	 Example (int p, int q, int r, int s)
	 {
		 this -> a= p;
		 this -> b= q;
		 this -> c= r;
		 this -> d= s;
	 }

	 Example & operator () (int a, int b, int c, int d)
	 {
		 std::cout<<"The Data Members Are"<<std::endl;
		 std::cout<<a<<b<<c<<d<<std::endl;
		 return *this;
	 }

	 Example & operator () (int a, int b)
	 {
		 int sum;
		 sum = a + b;
		 std::cout<<"The Summation Of a and b is"<<std::endl;
		 std::cout<<sum<<std::endl;
		 return *this;
	 }
	 
	 void operator () ()
	 {
		 std::cout<<"The Overloading Is Succesfull"<<std::endl;
	 }
 };

 int main()
 {
	 Example obj1(99, 63, 59, 46);
	
	 obj1( 99, 63, 59, 46)(99, 63)(); 
	 return 0;
 }
