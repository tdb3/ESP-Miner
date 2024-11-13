#ifndef MINER_H
#define MINER_H

struct miner;

struct miner_vtable {
    int (*initialize)(struct miner* i);
    int (*deactivate)(struct miner* i);
};

struct miner {
    struct miner_vtable* vtable;
};

int miner_initialize(struct miner* i);
int miner_deactivate(struct miner* i);

#endif