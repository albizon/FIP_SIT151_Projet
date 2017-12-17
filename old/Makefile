all:
	mkdir -p build
	cmake . -G"Unix Makefiles"
	make -f build/Makefile
	git checkout Makefile
	
install: all
	mkdir -p install
	cp build/cometbuster_exe install/cometbuster_exe
	cp rsc/scores.txt install/scores.txt
	cp rsc/fonts install/fonts
	cp rsc/sprites install/sprites
	
clean:
	rm build/*.o
	
clean.all: clean
	rm build/cometbuster_exe
	rm install/cometbuster_exe
	rm install/scores.txt
	rm install/fonts
	rm install/sprites
	
#Ligne Vide