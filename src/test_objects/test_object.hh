#ifndef __TEST_OBJECT_HH__
#define __TEST_OBJECT_HH__

#include <string>

#include "params/HelloObject.hh"
#include "sim/sim_object.hh"
#include "tutorial/part2/goodbye_object.hh"

namespace gem5
{

class TestObject : public SimObject
{
  private:
    void processEvent();

    EventWrapper event;

  public:
    TestObject(const TestObjectParams &p);

    void startup() override;
};

} // namespace gem5

#endif // __TEST_OBJECT_HH__