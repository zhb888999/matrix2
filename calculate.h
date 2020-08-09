#ifndef CALCULATE_H
#define CALCULATE_H

#include "matrix.h"

#define USE_MULTHREAD_SIZE 100000

struct message {
	void *data;
	size_t size;
	dtype type;
	size_t index;
    size_t bindex;
    size_t *pindex;
    int max_min;
};
typedef struct message message;

size_t _slice_max_uint8(uint8_t *data, size_t *index, size_t size);
size_t _slice_min_uint8(uint8_t *data, size_t *index, size_t size);
size_t _slice_max_uint16(uint16_t *data, size_t *index, size_t size);
size_t _slice_min_uint16(uint16_t *data, size_t *index, size_t size);
size_t _slice_max_uint32(uint32_t *data, size_t *index, size_t size);
size_t _slice_min_uint32(uint32_t *data, size_t *index, size_t size);
size_t _slice_max_uint64(uint64_t *data, size_t *index, size_t size);
size_t _slice_min_uint64(uint64_t *data, size_t *index, size_t size);
size_t _slice_max_int8(int8_t *data, size_t *index, size_t size);
size_t _slice_min_int8(int8_t *data, size_t *index, size_t size);
size_t _slice_max_int16(int16_t *data, size_t *index, size_t size);
size_t _slice_min_int16(int16_t *data, size_t *index, size_t size);
size_t _slice_max_int32(int32_t *data, size_t *index, size_t size);
size_t _slice_min_int32(int32_t *data, size_t *index, size_t size);
size_t _slice_max_int64(int64_t *data, size_t *index, size_t size);
size_t _slice_min_int64(int64_t *data, size_t *index, size_t size);
size_t _slice_max_float32(float *data, size_t *index, size_t size);
size_t _slice_min_float32(float *data, size_t *index, size_t size);
size_t _slice_max_float64(double *data, size_t *index, size_t size);
size_t _slice_min_float64(double *data, size_t *index, size_t size);

size_t _array_max_uint8(uint8_t *data, size_t size);
size_t _array_min_uint8(uint8_t *data, size_t size);
size_t _array_max_uint16(uint16_t *data, size_t size);
size_t _array_min_uint16(uint16_t *data, size_t size);
size_t _array_max_uint32(uint32_t *data, size_t size);
size_t _array_min_uint32(uint32_t *data, size_t size);
size_t _array_max_uint64(uint64_t *data, size_t size);
size_t _array_min_uint64(uint64_t *data, size_t size);
size_t _array_max_int8(int8_t *data, size_t size);
size_t _array_min_int8(int8_t *data, size_t size);
size_t _array_max_int16(int16_t *data, size_t size);
size_t _array_min_int16(int16_t *data, size_t size);
size_t _array_max_int32(int32_t *data, size_t size);
size_t _array_min_int32(int32_t *data, size_t size);
size_t _array_max_int64(int64_t *data, size_t size);
size_t _array_min_int64(int64_t *data, size_t size);
size_t _array_max_float32(float *data, size_t size);
size_t _array_min_float32(float *data, size_t size);
size_t _array_max_float64(double *data, size_t size);
size_t _array_min_float64(double *data, size_t size);

void *pcmax(void *mess);
void *pcmin(void *mess);
size_t amaxmin(array *arr, int max_min);

#endif
