#include "unity.h"
#include "miner_factory.h"
#include "nvstorage.h"
#include <string.h>

TEST_CASE("Test mining interface", "[mining_itfc]")
{
    // Just a simple dummy test for now
    struct nvstorage* nvs = NULL;
    struct miner* m = create_miner(nvs);
    TEST_ASSERT_NOT_NULL(m);
    TEST_ASSERT_EQUAL(miner_initialize(m), 0);
    TEST_ASSERT_EQUAL(miner_deactivate(m), 0);
}