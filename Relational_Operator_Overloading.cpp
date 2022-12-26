

//overload the relational operator

#include<iostream>
class Example
{
   public:
   int a;
   int b;
   Example (int x,int y)
    {
      this->a=x;
      this->b=y;
     }
    
   bool operator>(const Example& other)        
   {
         std::cout<< std::endl;
         std::cout<<"overloading of > operator"<<std::endl;
          if((this->a>other.a) && (this->b>other.b))
          {
             return 1;
          }
          else
          {
             return 0;
           }
   }
  
   bool operator<(const Example & other)        
   {
         std::cout<< std::endl;
         std::cout<<"overloading of < operator"<<std::endl;
          if((this->a<other.a) && (this->b<other.b))
          {
             return 1;
          }
          else
          {
             return 0;
           }
    }

   bool operator==(const Example& other)        
   {
       std::cout<< std::endl;
         std::cout<<"overloading of == operator"<<std::endl;
          if((this->a==other.a) && (this->b==other.b))
          {
             return 1;
          }
          else
          {
             return 0;
           }
    }

   bool operator!=(const Example & other)        
   {
         std::cout<< std::endl;
         std::cout<<"overloading of != operator"<<std::endl;
          if((this->a!=other.a) && (this->b!=other.b))
          {
             return 1;
          }
          else
          {
             return 0;
           }
    }

  bool operator<=(const Example & other)        
   {
         std::cout<< std::endl;
         std::cout<<"overloading of <= operator"<<std::endl;
          if((this->a<=other.a) && (this->b<=other.b))
          {
             return 1;
          }
          else
          {
             return 0;
           }
    }
      bool operator>=(const Example & other)        
   {
         std::cout<< std::endl;
         std::cout<<"overloading of >= operator"<<std::endl;
          if((this->a>=other.a) && (this->b>=other.b))
          {
             return 1;
          }
          else
          {
             return 0;
           }
    }
};

int main()
 {
    Example obj1(10,20);
    Example obj2(8,9);
    if(obj1>obj2)   // bool obj1.operator(&obj2);
     {
          std::cout<<"The obj1 is greater than obj2"<<std::endl;
      }
      else
       {
          std::cout<<"The obj1 is not greater than obj2"<<std::endl; 
        }

    Example obj3(89,46);
       if(obj1<obj3)   // bool  obj 1 operator<(&obj3);
     {
          std::cout<<"The obj1 is less  than obj3"<<std::endl;
      }
      else
       {
          std::cout<<"The obj3 is greater than obj1"<<std::endl; 
        }

    Example obj4(10,20);
     if(obj1==obj4)   // bool obj1.operator==(&obj4);
     {
          std::cout<<"The obj1 is equal to obj4"<<std::endl;
      }
      else
       {
          std::cout<<"The obj1 is not equal to obj4"<<std::endl; 
        }

     if(obj1!=obj2)   // bool obj1.operator!=(&obj2);
      {
          std::cout<<"The obj1 is not equal to obj4"<<std::endl;
      }
      else
       {
          std::cout<<"The obj1 is equal to obj4"<<std::endl; 
        }

    Example obj5(11,20);   //obj1(10,20)
      if(obj1<=obj5)   // bool obj1.operator<=(&obj5);
      {
          std::cout<<"The obj1 is less than or equal  to obj5"<<std::endl;
      }
      else
       {
          std::cout<<"The obj1 not less than or  equal to obj5"<<std::endl; 
        }

       if(obj5>=obj1)   // bool obj1.operator<=(&obj5);
      {
          std::cout<<"The obj5 is greater than or equal  to obj1"<<std::endl;
      }
      else
       {
          std::cout<<"The obj5 is  not greater than or  equal to obj1"<<std::endl; 
        }
    return 0;
  }





