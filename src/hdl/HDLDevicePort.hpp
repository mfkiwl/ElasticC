#pragma once
#include "HDLPortType.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace RapidHLS {
namespace HDLGen {
class HDLSignal;
class HDLDevice;

enum class PortDirection { Input, Output, Bidir };

class HDLDevicePort {
public:
  string name;
  HDLDevice *device = nullptr;
  HDLPortType *type = nullptr;
  HDLSignal *connectedNet = nullptr;
  PortDirection dir = PortDirection::Input;
  void GenerateVHDL(ostream &vhdl, bool is_last = false);
};
}
}
