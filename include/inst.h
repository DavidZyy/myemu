#pragma once

class inst {
private:
    char op[10];
    int rd, rs1, rs2;

public:
    inst(const char* operation, int destination, int source1, int source2);
    const char* getOperation() const;
    int getDestination() const;
    int getSource1() const;
    int getSource2() const;
    ~inst();
};
