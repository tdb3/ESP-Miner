#ifndef NVSTORAGE_H
#define NVSTORAGE_H

#include <stdint.h>

struct nvstorage;

struct nvstorage_vtable {
    int (*initialize)(struct nvstorage* i);
    int (*deactivate)(struct nvstorage* i);
    int (*get_value_u16)(struct nvstorage* i, const char* key, uint16_t* dest);
    int (*get_value_u64)(struct nvstorage* i, const char* key, uint64_t* dest);
    int (*get_value_str)(struct nvstorage* i, const char* key, char* dest, int* dest_size);
};

struct nvstorage {
    struct nvstorage_vtable* vtable;
};

int nvstorage_initialize(struct nvstorage* i);
int nvstorage_deactivate(struct nvstorage* i);
int nvstorage_get_value_u16(struct nvstorage* i, const char* key, uint16_t* dest);
int nvstorage_get_value_u64(struct nvstorage* i, const char* key, uint64_t* dest);
int nvstorage_get_value_str(struct nvstorage* i, const char* key, char* dest, int* dest_size);

#endif