#pragma once

namespace foo
{

class PB
{
public:
  virtual ~PB() {}
  virtual void foo() = 0;
};

class B : public PB
{
public:
  B();
  void foo();
private:
  PB* I;
};

}
