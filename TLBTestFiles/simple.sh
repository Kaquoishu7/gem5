#!/bin/bash
m5 resetstats
./simple.elf
m5 dumpstats
