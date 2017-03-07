//friend.cpp
//demonstrates Friends can access private numbers

#include <iostream>
using namespace std;

//Count class defination
class Count
{
friend void setX(Count &, int);  //friend declaration
public:
//constructor
Count()
: x(0) //initialize x to 0
{
//empty body

}//end of the constructor

//output x
void print() const
{
cout<< x << endl;

}//end function print

private:
int x;  //data menber
}//end of class Count

//function setX can modify private data of Count
//because setX is declared as a friend of Count 

void setX(Count &c, int val )
{
c.x = val ;// allowed because setX is a friend of Count
}//end function setX


int main()
{
Count counter; //create Count object

cout<< "counter.x after instantiation: ";
counter.print();

setX( counter, 8 ); //set x using a friend function
cout<< "counter.x after call to setX friend function :  ";

counter.print();
}//end main
