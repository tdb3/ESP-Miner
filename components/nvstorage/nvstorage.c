#include "nvstorage.h"

int nvstorage_initialize(struct nvstorage* i) {
    return i->vtable->initialize(i);
}

int nvstorage_deactivate(struct nvstorage* i) {
    return i->vtable->deactivate(i);
}

int nvstorage_get_value_u16(struct nvstorage* i, const char* key, uint16_t* dest) {
    return i->vtable->get_value_u16(i, key, dest);
}

int nvstorage_get_value_u64(struct nvstorage* i, const char* key, uint64_t* dest) {
    return i->vtable->get_value_u64(i, key, dest);
}

int nvstorage_get_value_str(struct nvstorage* i, const char* key, char* dest, int* dest_size) {
    return i->vtable->get_value_str(i, key, dest, dest_size);
}