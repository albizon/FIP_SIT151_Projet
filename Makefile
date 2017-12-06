all:
	cmake . -G"Unix Makefiles"
	make build/Makefile
	
install: all
	cp build/cometbuster_exe install/cometbuster_exe
	cp rsc/scores.txt install/scores.txt
	cp rsc/fonts install/fonts
	cp rsc/sprites install/sprites
	
clean
	rm build/*.o
	rm build/cometbuster_exe
	rm install/cometbuster_exe
	
#Ligne Vide