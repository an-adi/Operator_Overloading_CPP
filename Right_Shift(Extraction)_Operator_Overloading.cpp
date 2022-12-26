#include <iostream>

class Aditya
{
public:
	int a; 
	int b;
	int c;
	int d;
	int e;
	int f;
	 friend std:: istream & operator >> (std:: istream &Enter  , const Aditya &reference);

};
std:: istream & operator >> (std:: istream &Enter  , const Aditya &reference)
{
	Enter>>reference.d;
	Enter>>reference.e;
    Enter>>reference.f;
	return  Enter;
	
}


int main ()
{
	
	Aditya A1;
	std::cout<<"This is output of normal printing function implicitly (In Only Main Function)"<<std::endl;
	std::cin>>A1.a;
	std::cin>>A1.b;
	std::cin>>A1.c;

	std::cout<<std::endl;

	Aditya A2;
	std::cout<<"This is output of printing function overloaded that is insertion overloading"<<std::endl;
	operator >> (std::cin>>A2);
	return 0;
	
}