#include "bitaxe_gamma_miner.h"
#include <stdio.h>

struct bitaxe_gamma_miner g_bitaxe_gamma_miner;

int bitaxe_gamma_miner_initialize(struct miner* i) {
    printf("bitaxe_gamma_miner_initialize() called\n");
    return 0;
}

int bitaxe_gamma_miner_deactivate(struct miner* i) {
    printf("bitaxe_gamma_miner_deactivate() called\n");
    return 0;
}

struct miner_vtable bitaxe_gamma_miner_vtable = {
    &bitaxe_gamma_miner_initialize,
    &bitaxe_gamma_miner_deactivate
};

void bitaxe_gamma_miner_ctor(struct miner* m) {
    struct bitaxe_gamma_miner* m2 = (struct bitaxe_gamma_miner*)m;
    m2->intfc.vtable = &bitaxe_gamma_miner_vtable;
}