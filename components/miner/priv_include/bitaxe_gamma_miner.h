#ifndef BITAXE_GAMMA_MINER_H
#define BITAXE_GAMMA_MINER_H

#include "miner.h"

struct bitaxe_gamma_miner {
    struct miner intfc;
    // other data members
};

int bitaxe_gamma_miner_initialize(struct miner* i);
int bitaxe_gamma_miner_deactivate(struct miner* i);

void bitaxe_gamma_miner_ctor(struct miner* m);

extern struct bitaxe_gamma_miner g_bitaxe_gamma_miner;

#endif