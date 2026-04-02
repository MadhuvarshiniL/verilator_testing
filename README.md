# Verilator D Flip-Flop Project

## Description
This project demonstrates a D Flip-Flop with reset and enable using Verilator.

## Features
- Cycle-accurate simulation
- C++ testbench
- Waveform generation (VCD)

## Run
verilator -Wall --trace -cc dff.v --exe sim_main.cpp
make -C obj_dir -f Vdff.mk Vdff
./obj_dir/Vdff
gtkwave wave.vcd
