#include "bitaxe_supra_miner.h"
#include <stdio.h>

struct bitaxe_supra_miner g_bitaxe_supra_miner;

int bitaxe_supra_miner_initialize(struct miner* i) {
    printf("bitaxe_supra_miner_initialize() called\n");
    return 0;
}

int bitaxe_supra_miner_deactivate(struct miner* i) {
    printf("bitaxe_supra_miner_deactivate() called\n");
    return 0;
}

struct miner_vtable bitaxe_supra_miner_vtable = {
    &bitaxe_supra_miner_initialize,
    &bitaxe_supra_miner_deactivate
};

void bitaxe_supra_miner_ctor(struct miner* m) {
    struct bitaxe_supra_miner* m2 = (struct bitaxe_supra_miner*)m;
    m2->intfc.vtable = &bitaxe_supra_miner_vtable;
}