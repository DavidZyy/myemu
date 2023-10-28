#include "ReservationStation.h"

ReservationStation::ReservationStation() {
    busy = false;
    op = "";
    vj = 0;
    vk = 0;
    qj = 0;
    qk = 0;
    result = 0;
    resultStation = 0;
}

void ReservationStation::SetOperation(const std::string& operation) {
    op = operation;
}

void ReservationStation::SetBusy(bool isBusy) {
    busy = isBusy;
}

void ReservationStation::SetVj(int value) {
    vj = value;
}

void ReservationStation::SetVk(int value) {
    vk = value;
}

void ReservationStation::SetQj(int station) {
    qj = station;
}

void ReservationStation::SetQk(int station) {
    qk = station;
}

void ReservationStation::SetResult(int value, int station) {
    result = value;
    resultStation = station;
}

bool ReservationStation::IsBusy() const {
    return busy;
}

std::string ReservationStation::GetOperation() const {
    return op;
}

int ReservationStation::GetVj() const {
    return vj;
}

int ReservationStation::GetVk() const {
    return vk;
}

int ReservationStation::GetQj() const {
    return qj;
}

int ReservationStation::GetQk() const {
    return qk;
}

int ReservationStation::GetResult() const {
    return result;
}

int ReservationStation::GetResultStation() const {
    return resultStation;
}
