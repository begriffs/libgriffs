#ifndef LIBDERP_HASHMAP_H
#define LIBDERP_HASHMAP_H

#include "common.h"

#include <stdbool.h>
#include <stddef.h>

typedef struct hashmap hashmap;

hashmap * hm_new(size_t, hashfn *, comparator *, void *cmp_aux);
void      hm_free(hashmap *);
void      hm_dtor(hashmap *, dtor *key_dtor, dtor *val_dtor, void *aux);
size_t    hm_length(const hashmap *);
bool      hm_is_empty(const hashmap *);
void *    hm_at(const hashmap *, const void *);
bool      hm_insert(hashmap *, void *key, void *val);
bool      hm_remove(hashmap *, void *);
void      hm_clear(hashmap *);

#endif
