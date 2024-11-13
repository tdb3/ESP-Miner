#ifndef BITAXE_SUPRA_MINER_H
#define BITAXE_SUPRA_MINER_H

#include "miner.h"

struct bitaxe_supra_miner {
    struct miner intfc;
    // other data members
};

int bitaxe_supra_miner_initialize(struct miner* i);
int bitaxe_supra_miner_deactivate(struct miner* i);

void bitaxe_supra_miner_ctor(struct miner* m);

extern struct bitaxe_supra_miner g_bitaxe_supra_miner;

#endif