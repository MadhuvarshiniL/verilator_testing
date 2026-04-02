# Verilator D Flip-Flop

## Description
D Flip-Flop with enable and reset simulated using Verilator.

## Files
- dff.v : RTL design
- sim_main.cpp : C++ testbench

## Run
verilator -Wall --trace -cc dff.v --exe sim_main.cpp
make -C obj_dir -f Vdff.mk Vdff
./obj_dir/Vdff
gtkwave wave.vcd
