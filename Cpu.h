#pragma once
#include <cstdint>
#include <map>
#include <string>
#include "ALU.h"

// forward declaration.
class Memory;

// CPU class to represent a general purpose CPU.
class CPU
{
private:
  ALU alu;
  Memory *memory;
  std::map<std::string, int8_t> registers;
  int16_t program_counter;
  int8_t fetch();
  uint8_t decode(uint8_t data);
  uint8_t execute(uint8_t opcode); // will return a binary number representing failure or success

public:
  CPU(Memory *memory);
  uint8_t start();
};