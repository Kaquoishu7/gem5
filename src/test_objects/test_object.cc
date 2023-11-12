#include "test_object.hh"
#include "base/trace.hh"

#include <iostream>

namespace gem5
{

TestObject::TestObject(TestObjectParams &params) : SimObject(params), event(*this) {

}

void TestObject::startup() {
    
}

void TestObject::processEvent() {

}

} // namespace gem5