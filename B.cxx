#include "B.hxx"

#include <iostream>

namespace foo
{

struct Impl : public PB
{
  void foo()
    {
    std::cout << "I'm PB Implementation" << std::endl;
    }
};

B::B()
{
  I = new Impl;
}

void B::foo()
{
  I->foo();
}

}
