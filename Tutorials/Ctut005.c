#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World");

    return 0;
}

// Behind The Scenes of c compiling
// command => gcc -Wall -save-temps tut05.c -o bts

// Four files will be file will created -->

//  bts.i    => It contains required command with our program
//  bts.s    => It contains Assembly level instructions
//  bts.o    => It contains Machine level instruction
//  bts.out (in linux) & bts.exe (in Windows) => Executable file (linking file)