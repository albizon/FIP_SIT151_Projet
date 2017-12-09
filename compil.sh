cmake . -G"Unix Makefiles"
make -f build/Makefile
cp build/cometbuster_exe install/cometbuster_exe
cp rsc/scores.txt install/scores.txt
cp rsc/fonts install/fonts
cp rsc/sprites install/sprites