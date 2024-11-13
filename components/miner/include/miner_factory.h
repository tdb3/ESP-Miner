#ifndef MINER_FACTORY_H
#define MINER_FACTORY_H

#include "miner.h"
#include "nvstorage.h"

extern struct miner* g_miner_ptr;

struct miner* create_miner(struct nvstorage* nvs);

#endif