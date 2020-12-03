all: Final.o  doc

count: Final.o 
	 gcc -o count Final.o 

Final.o: Final.cc
	 gcc -c Final.cc

doc: config 
	 doxygen config

config: 
	 doxygen -g config
  
clean:
	rm final.o count.o 

