#include "A.hxx"

#include <iostream>

namespace foo
{

struct Impl : public PA
{
  void foo()
    {
    std::cout << "I'm PA Implementation" << std::endl;
    }
};

A::A()
{
  I = new Impl;
}

void A::foo()
{
  I->foo();
}

}
