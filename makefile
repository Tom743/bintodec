UNAME := $(shell uname)

ifeq ($(UNAME), Windows_NT)
bintodec_win64.exe:
	x86_64-w64-mingw32-g++ bintodec.cpp -static-libstdc++ -static-libgcc -o $@
else 
bintodec_linux: bintodec.cpp
	g++ bintodec.cpp -o $@

endif

clean:
	rm bintodec_linux bintodec_win64.exe -f
