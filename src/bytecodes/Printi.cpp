#include "../../inc/bytecodes/Printi.h"
#include "../../inc/Program.h"
#include <iostream>

Printi::Printi(){}
Printi::~Printi(){}

void Printi::execute(){
    //Print value
    std::cout << Program::runtime_stack[Program::stack_pointer]->getInt() << std::endl;
    //Decrement stack_pointer
    Program::stack_pointer--;
    //Pop value off of stack
    Program::runtime_stack.pop_back();
    //Increment program_counter
    Program::program_counter++;
} 