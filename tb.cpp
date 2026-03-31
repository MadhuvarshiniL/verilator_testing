std::cout << "Cycle " << i
          << " d=" << (int)dut->d
          << " q=" << (int)dut->q << std::endl;#include "Vdff.h"
#include "verilated.h"
#include <iostream>

int main() {
    Vdff* dut = new Vdff;

    for (int i = 0; i < 5; i++) {
        dut->d = i % 2;

        dut->clk = 0;
        dut->eval();

        dut->clk = 1;
        dut->eval();

        std::cout << "Cycle " << i
                  << " d=" << dut->d
                  << " q=" << dut->q << std::endl;
    }

    delete dut;
    return 0;
}
