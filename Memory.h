#pragma once
#include <cstdint>

// Memory class to represent RAM interactions with a CPU.
class Memory {
  private:
    uint8_t ram[65536];
  public:
    int8_t read(uint8_t addr) const;
    int8_t write(uint8_t addr, int8_t value);
};