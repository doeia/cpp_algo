#include <string>
using namespace std;
class MyClass
{
private:
  /* data */
public:
  string myName;
  // Constructor declaration
  MyClass(/* args */);
  ~MyClass();
};

// Constructor definition outside the class
MyClass::MyClass(/* args */)
{
}

MyClass::~MyClass()
{
}

int main(int argc, char const *argv[])
{
  MyClass myObj;

  myObj.myName = "Bob";
  return 0;
}
