#include "Memory.h"
#include "Cpu.h"
#include <iostream>

int main()
{

    Memory memory;
    memory.write(0x00, 0xC6); // put the "ADDI" instruction and see if it works
    memory.write(0x01, 0x03);
    Memory *memPtr = &memory;
    CPU cpu(memPtr);
    cpu.start();

    return 0;
}
