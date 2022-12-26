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
	int L;
	int M;
	int N;

	 Aditya (int x, int y, int z)
	{
		this -> a= x;
		this -> b=y;
		this -> c=z;
	}

	 Aditya ( int p, int q, int r, int i, int j, int k)
	 {
		this -> d=p;
		this -> e=q;
		this -> f=r;
		this -> L=i;
		this -> M=j;
		this -> N=k;
	 }



	 void Show_Data()
	 {
		 std::cout<<d<<std::endl;
		 std::cout<<e<<std::endl;
		 std::cout<<f<<std::endl;
	 }
	 friend std:: ostream & operator << (std:: ostream &print , const Aditya &reference);
};

std:: ostream & operator << (std:: ostream &print , const Aditya &reference)
{
	print<<reference.d<<std::endl;
	print<<reference.e<<std::endl;
    print<<reference.f<<std::endl;
	print<<reference.L<<std::endl;
	print<<reference.M<<std::endl;
	print<<reference.N<<std::endl;
	return print;
}

int main ()
{
	Aditya Adi(28, 04, 827);
	std::cout<<"This is output of normal printing function implicitly (In Only Main Function)"<<std::endl;
	std::cout<<Adi.a<<std::endl;
	std::cout<<Adi.b<<std::endl;
	std::cout<<Adi.c<<std::endl;

	std::cout<<std::endl;

	Aditya An_Adi(51, 56, 927, 9, 2002, 786);
	std::cout<<"This is output of normal printing function implicitly (By Function Of Class)"<<std::endl;
	An_Adi.Show_Data();

	std::cout<<std::endl;

	std::cout<<"This is output of printing function overloaded that is insertion overloading"<<std::endl;
	std::cout<< An_Adi<<std::endl;
	return 0;
	
}