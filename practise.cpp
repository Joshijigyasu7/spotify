#include<iostream>
#include<cmath>
using namespace std;
//class-it is a template for the object or it a data type for the class
//object- it is a variable of te type class/or it is a variable that has  a name and properties that define it
//simple class and object
class Transport{
    public:
    Transport():x(22){
        cout<<"bahiya me transport ka construct normal\n";
    }
    Transport(int a):x(a){
        cout<<"bahiya me transport ka construct\n";
    }
    virtual ~Transport(){
        cout<<"bahiya me transport ka destruct\n";
    }
   
     void start(){
        cout<<"starting dhruuuuu \n";

    }
    virtual void printpro(){
        cout<<"   haan bhaii\n";
    }
    void stop(){
        cout<<"stoping dhishdhishdhish\n";
    }
    operator int(){
        return(x+y+z);
    }
  void operator +=(int m){
  
    x=x+m;

  }
   int x;
   int y,z;

   bool operator >=(int n){
    if(x>=n){
        return true;
    }
    else 
    return false;

   }

   Transport& operator --(){
    x-=1;
    return *this;
   }
   Transport operator --(int){
    Transport temp=*this;
    x-=1;
    return temp;
   }
    void display(){
        cout<<x<<"  hehe  "<<endl;
    }
};
class bus:public Transport{
    public:
    bus(){
        y=5;
    }
    bus(int b):y(b){
        cout<<"bhaiya me bus ka construct\n";
    }
    ~bus(){
        cout<<"bhaiya me bus ka destruct\n";
    }
    
  void printpro(){
    cout<<x<<" haan bhaii\n";
  }
int y;
void localstop(){
    cout<<"stopping at a local stop\n";
    
}

};

int main(){
    Transport ob(3);
    if(1>=ob){
        cout<<"heya";
    }
  
    ob.display();

  
    //Overloading the operators
    //int type cast
  
  

  
   
    return 0;
}
