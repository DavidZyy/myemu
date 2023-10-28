#include "inst.h"
#include <cstring>

inst::inst(const char* operation, int destination, int source1, int source2)
    : rd(destination), rs1(source1), rs2(source2) {
    strncpy(op, operation, sizeof(op) - 1);
    op[sizeof(op) - 1] = '\0'; // Ensure null-terminated string
}

const char* inst::getOperation() const {
    return op;
}

int inst::getDestination() const {
    return rd;
}

int inst::getSource1() const {
    return rs1;
}

int inst::getSource2() const {
    return rs2;
}

inst::~inst() {}

