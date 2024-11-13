#include "miner.h"

int miner_initialize(struct miner* i) {
    return i->vtable->initialize(i);
}

int miner_deactivate(struct miner* i) {
    return i->vtable->deactivate(i);
}