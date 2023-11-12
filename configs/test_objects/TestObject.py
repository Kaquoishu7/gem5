from m5.params import *
from m5.proxy import *
from m5.SimObject import SimObject

class TestObject(SimObject):
    type = 'TestObject'
    cxx_header = "test_objects/test_object.hh"