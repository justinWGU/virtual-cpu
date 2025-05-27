#pragma once
#include <cstdint>

// Memory class to represent RAM interactions with a CPU.
class Memory {
  private:
    uint8_t ram[65536];
  public:
    int16_t read(uint16_t addr) const;
    int16_t write(uint16_t addr, int16_t value);
};