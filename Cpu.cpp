#include "Cpu.h"
#include "Memory.h"
#include <iostream>
#include <cstdlib>

CPU::CPU(Memory *memory)
{
  this->memory = memory;
  registers = {{"A", 0}, {"B", 0}, {"PC", 0}};
}

uint8_t CPU::start()
{
  std::cout << "Starting..." << std::endl;
  while (true)
  {
    int8_t pc_value = fetch();
    uint8_t opcode = decode(pc_value);
    int8_t result = execute(opcode);
  }
}

int8_t CPU::fetch()
{
  // read memory address at current PC and increment
  std::cout << "Fetching..." << registers.at("PC") << std::endl;
  int8_t register_value = memory->read(registers.at("PC")++);
  return register_value;
}

uint8_t CPU::decode(int8_t data) const
{
  // add switch statment here to decode OPCODES and determine OPCODE to output
  std::cout << "Decoding..." << std::endl;
  return 0;
}

uint8_t CPU::execute(uint8_t opcode)
{
  // add switch statment to determine math operations
  std::cout << "Executing..." << std::endl;
  return 0;
}
