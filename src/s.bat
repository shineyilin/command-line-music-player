g++ -c main.cpp  -o main.o 
g++  main.o -lgraphics -lgdi32 -limm32 -lmsimg32 -lole32 -loleaut32 -lwinmm -luuid -o main.exe
pause