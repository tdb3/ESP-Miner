#include <stdlib.h>

#include "miner_factory.h"
#include "bitaxe_supra_miner.h"
#include "bitaxe_gamma_miner.h"

struct miner* g_miner_ptr = 0;

struct miner* create_miner(struct nvstorage* nvs) {
    #if BITAXE_SUPRA
        // TODO: Read from nvstorage,
        //       determine specific type of supra (e.g. 401),
        //       and switch on the type to instantiate the right miner
        g_miner_ptr = (struct miner*)(&g_bitaxe_supra_miner);
        bitaxe_supra_miner_ctor(g_miner_ptr); 
    #elif BITAXE_GAMMA
        g_miner_ptr = (struct miner*)(&g_bitaxe_gamma_miner);
        bitaxe_gamma_miner_ctor(g_miner_ptr);
    #endif

    return g_miner_ptr; 
}