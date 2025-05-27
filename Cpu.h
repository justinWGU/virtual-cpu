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
  std::map<std::string, int8_t> registers;
  int8_t fetch();
  uint8_t decode(int8_t data) const;
  uint8_t execute(uint8_t opcode); // will return a binary number representing failure or success

public:
  CPU(Memory *memory);
  uint8_t start();
};