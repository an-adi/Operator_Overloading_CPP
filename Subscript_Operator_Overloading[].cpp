//subscript operator overloading
#include<iostream>
class Example
{
  public:
  int arr[10];
  int size;
  Example(int size)
  {
   this->size=size;  
   }

int& operator[](int index)
{

  if(index<0 || index>(this->size))
   {
    std::cout<<"Enter valid index"<<std::endl;
    }
    else
    {
     return this->arr[index];
    }
}

};
int main()
{

Example obj1(5);
obj1[5]=100;        //obj1.operator[](5)=100;
 
std::cout<<"The value at index is "<<obj1.arr[5]<<"   ";
return 0;
}