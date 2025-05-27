#include "Cpu.h"
#include "Memory.h"
#include <iostream>
#include <cstdlib>

CPU::CPU(Memory *memory)
{
  this->memory = memory;
  registers = {{"A", 0}, {"B", 0}, {"C", 0}, {"D", 0}, {"E", 0}, {"H", 0}, {"L", 0}};
  program_counter = 0;
}

uint8_t CPU::start()
{
  std::cout << "Starting..." << std::endl;
  //  while (true)
  //  {
  int8_t fetched_byte = fetch();
  uint8_t result = decode(fetched_byte);
  //  }
  return 0;
}

int8_t CPU::fetch()
{
  // read memory address at current PC and increment
  std::cout << "Fetching from register..." << program_counter << std::endl;
  int8_t register_value = memory->read(program_counter++);
  return register_value;
}

uint8_t CPU::decode(uint8_t data) // not sure if this should be void
{
  // switch statment to decode bytes
  std::cout << "Decoding..." << std::endl;

  int8_t data_byte{0};
  int8_t alu_result{0};

  // possibly abstract switch into it's own util func
  switch (data)
  {
  case 0xC6:
    data_byte = fetch();
    alu_result = alu.add(registers.at("A"), data_byte);
    registers.at("A") = alu_result;
    break;

  default:
    std::cout << "Unknown instruction." << std::endl;
  }

  return 0;
}

uint8_t CPU::execute(uint8_t opcode)
{
  // add switch statment to determine math operations
  std::cout << "Executing..." << std::endl;
  return 0;
}
