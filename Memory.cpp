#include "Memory.h"
#include <cstdint>

// returns value held at given memory address. 
int16_t Memory::read(uint16_t addr) const {
  return ram[addr];
}

int16_t Memory::write(uint16_t addr, int16_t value) {
  ram[addr] = value;
  return ram[addr];
}