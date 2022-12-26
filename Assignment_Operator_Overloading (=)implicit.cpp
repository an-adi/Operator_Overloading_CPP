#include <iostream>
//assignment operator overloading by implicitly
class Example
{
public:

	int a;
	int b;
	int c;
	

	Example () // constructor is default and used only to assigmed values to data members
	{
		this -> a = 10; 
        this ->b=20;
	     this -> c= 30;
		
	} 
	
	 void show()
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
		std::cout<<c<<std::endl;
		
	}
};

int main()
{
	Example e1;
	
	
	 std::cout<<"After Copying From Object 1 to Object 2( Without change in main object)"<<std::endl;
	Example e2;
	e2 = e1; //assignment operator overloading implicitly
	std::cout<<"e1 Object Data:"<<std::endl; //this are op before increamenting data members but copied by operator 
	e1.show();
	std::cout<<std::endl;
	std::cout<<"e2 Object Data:"<<std::endl;
	e2.show();

	(e1.a)++;
	(e1.b)++;
	(e1.c)++;


	
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<std::endl;
	//this are op after  increamenting data members which were copied by operator 
	std::cout<<"After Copying From Object 1 to Object 2 and Changing in main object"<<std::endl;
	std::cout<<"e1 Object Data:"<<std::endl;
	e1.show();

	std::cout<<std::endl;
	std::cout<<"e2 Object Data that is operrator overloading implicitly :"<<std::endl;
	e2.show();

	return 0;
}