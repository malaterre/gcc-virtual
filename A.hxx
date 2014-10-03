#pragma once

namespace foo
{

class PA // parent A
{
public:
  virtual ~PA() {}
  virtual void foo() = 0;
};

class A : public PA
{
public:
  A();
  void foo();
private:
  PA* I;
};

}
