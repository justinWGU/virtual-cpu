#include "Cpu.h"
#include "Memory.h"
#include <iostream>
#include <cstdlib>

CPU::CPU(Memory *memory)
{
  this->memory = memory;
  registers = {{"A", 0}, {"B", 0}, {"PC", 0}};
}

uint16_t CPU::start()
{
  std::cout << "Starting..." << std::endl;
  while (true)
  {
    int16_t pc_value = fetch();
    uint16_t opcode = decode(pc_value);
    int16_t result = execute(opcode);
  }
}

int16_t CPU::fetch()
{
  // read memory address at current PC and increment
  std::cout << "Fetching..." << registers.at("PC") << std::endl;
  int16_t register_value = memory->read(registers.at("PC")++);
  return register_value;
}

uint16_t CPU::decode(int16_t data) const
{
  // add switch statment here to decode OPCODES and determine OPCODE to output
  std::cout << "Decoding..." << std::endl;
  return 0;
}

uint16_t CPU::execute(uint16_t opcode)
{
  // add switch statment to determine math operations
  std::cout << "Executing..." << std::endl;
  return 0;
}
