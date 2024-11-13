idf_component_register(
SRCS
    "miner.c"
    "miner_factory.c"
    "bitaxe_supra_miner.c"
    "bitaxe_gamma_miner.c"
                    
INCLUDE_DIRS
    "include"

PRIV_INCLUDE_DIRS
    "priv_include"

REQUIRES
    "nvstorage"
)