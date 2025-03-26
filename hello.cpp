#include<iostream>
#include<string>

using namespace std;
//what is object-its a enity that has anme and properties that define it and methouds that manipulate it
//class- its a blueprint or template for declaring objects or objects are the variables of type class
//Revisiting Inheritance
//Managing acess within the classes

int main(){
  string hello ("hello world!");
  char *hell="namaste";
  string neww=hell;
  string naya(hell);
  cout<<neww[0];

  string::const_iterator ite;
 
    cout<<neww.c_str();
  

  size_t offse;

offse=neww.find("namaste",0);
cout<<offse;
}