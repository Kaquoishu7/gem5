#!/bin/bash -e

TYPE=mod

# build/X86/gem5.opt configs/tutorial/syscall_emulation/simple.py &> simple.$TYPE.out
# mv m5out/stats.txt simple.$TYPE.stats
echo $TYPE
for test in simple arrays codeflows; do
    echo $test
    build/X86/gem5.opt configs/tutorial/syscall_emulation/$test.py &> $test.$TYPE.out
    mv m5out/stats.txt $test.$TYPE.stats
done
