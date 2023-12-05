# Simply compile our tests

# The name without the file ending
TEST_FILES=simple

# Generate all raw binaries (will call bin rule)
all: $(TEST_FILES).sh
	echo "Success generating all targets!"

%.sh: %.elf
	echo '#!/bin/bash\nm5 resetstats\n./$^\nm5 dumpstats' > $@

%.elf: %.cpp
	g++ -Wall $^ -o $@

%.bin: %.elf
	echo "TODO!"