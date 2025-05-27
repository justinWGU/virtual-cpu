#include "Memory.h"
#include <cstdint>

// returns value held at given memory address. 
int8_t Memory::read(uint8_t addr) const {
  return ram[addr];
}

int8_t Memory::write(uint8_t addr, int8_t value) {
  ram[addr] = value;
  return ram[addr];
}