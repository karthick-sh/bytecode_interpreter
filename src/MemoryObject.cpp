#include "../inc/MemoryObject.h"

MemoryObject::MemoryObject(){}
MemoryObject::~MemoryObject(){}

std::ostream& operator<<(std::ostream &out, MemoryObject &mem){
    // std::cout << "Calls this";
    mem.print(out);
    return out;
}
