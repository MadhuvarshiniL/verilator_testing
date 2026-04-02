#include "Vdff.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vdff* top = new Vdff;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 5);
    tfp->open("wave.vcd");

    top->clk = 0;
    top->rst = 1;
    top->en  = 0;
    top->d   = 0;

    for (int i = 0; i < 20; i++) {
        top->clk = !top->clk;

        if (i == 2) top->rst = 0;
        if (i == 4) { top->en = 1; top->d = 1; }
        if (i == 6) top->d = 0;
        if (i == 8) top->d = 1;
        if (i == 10) top->en = 0;
        if (i == 12) top->rst = 1;

        top->eval();
        tfp->dump(i);
    }

    tfp->close();
    delete top;
    return 0;
}
