#pragma once
#include <cstdint>
#include <map>
#include <string>

// forward declaration.
class Memory;

// CPU class to represent a general purpose CPU.
class CPU
{
private:
  Memory *memory;
  std::map<std::string, int16_t> registers;
  int16_t fetch();
  uint16_t decode(int16_t data) const;
  uint16_t execute(uint16_t opcode); // will return a binary number representing failure or success

public:
  CPU(Memory *memory);
  uint16_t start();
};