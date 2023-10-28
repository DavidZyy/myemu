#pragma once
#include <string>

class ReservationStation {
public:
    ReservationStation();
    void SetOperation(const std::string& operation);
    void SetBusy(bool isBusy);
    void SetVj(int value);
    void SetVk(int value);
    void SetQj(int station);
    void SetQk(int station);
    void SetResult(int value, int station);
    bool IsBusy() const;
    std::string GetOperation() const;
    int GetVj() const;
    int GetVk() const;
    int GetQj() const;
    int GetQk() const;
    int GetResult() const;
    int GetResultStation() const;

protected:
    bool busy;
    std::string op;
    int vj;
    int vk;
    int qj;
    int qk;
    int result;
    int resultStation;
};
