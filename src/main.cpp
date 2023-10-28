#include "ReservationStation.h"
#include "AddReservationStation.h"
#include "MultiplyReservationStation.h"
#include "inst.h"
#include <queue>

int main() {
    std::queue<int> q;

    for (int32_t i=0; i<-1; i++) {
        single_cycle();
    }
    return 0;
}
