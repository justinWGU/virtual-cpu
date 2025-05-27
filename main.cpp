#include "Memory.h"
#include "Cpu.h"
#include <iostream>

int main()
{

    Memory memory;
    Memory *memPtr = &memory;
    CPU cpu(memPtr);
    cpu.start();

    return 0;
}
