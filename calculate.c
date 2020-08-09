#include <pthread.h>
#include <stdint.h>
#include "calculate.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#define MAX 0
#define MIN 1

size_t _slice_max_uint8(uint8_t *data, size_t *index, size_t size) {
    uint8_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_min_uint8(uint8_t *data, size_t *index, size_t size) {
    uint8_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_uint16(uint16_t *data, size_t *index, size_t size) {
    uint16_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}
    
size_t _slice_min_uint16(uint16_t *data, size_t *index, size_t size) {
    uint16_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_uint32(uint32_t *data, size_t *index, size_t size) {
    uint32_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}
    
size_t _slice_min_uint32(uint32_t *data, size_t *index, size_t size) {
    uint32_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_uint64(uint64_t *data, size_t *index, size_t size) {
    uint64_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}
    
size_t _slice_min_uint64(uint64_t *data, size_t *index, size_t size) {
    uint64_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_int8(int8_t *data, size_t *index, size_t size) {
    int8_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}
    
size_t _slice_min_int8(int8_t *data, size_t *index, size_t size) {
    int8_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_int16(int16_t *data, size_t *index, size_t size) {
    int16_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}
    
size_t _slice_min_int16(int16_t *data, size_t *index, size_t size) {
    int16_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_int32(int32_t *data, size_t *index, size_t size) {
    int32_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}
    
size_t _slice_min_int32(int32_t *data, size_t *index, size_t size) {
    int32_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_int64(int64_t *data, size_t *index, size_t size) {
    int64_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_min_int64(int64_t *data, size_t *index, size_t size) {
    int16_t _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_float32(float *data, size_t *index, size_t size) {
    float _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_min_float32(float *data, size_t *index, size_t size) {
    float _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_max_float64(double *data, size_t *index, size_t size) {
    double _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] > _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _slice_min_float64(double *data, size_t *index, size_t size) {
    double _data = data[0];
    size_t _index = index[0];
    for(size_t i=0; i < size; i++)
        if(data[index[i]] < _data) {
            _data = data[index[i]];
            _index = index[i];
        }
    return _index;
}

size_t _array_max_uint8(uint8_t *data, size_t size) {
    uint8_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_uint8(uint8_t *data, size_t size) {
    uint8_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_uint16(uint16_t *data, size_t size) {
    uint16_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_uint16(uint16_t *data, size_t size) {
    uint16_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_uint32(uint32_t *data, size_t size) {
    uint32_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_uint32(uint32_t *data, size_t size) {
    uint32_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_uint64(uint64_t *data, size_t size) {
    uint64_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_uint64(uint64_t *data, size_t size) {
    uint64_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_int8(int8_t *data, size_t size) {
    int8_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_int8(int8_t *data, size_t size) {
    int8_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_int16(int16_t *data, size_t size) {
    int16_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_int16(int16_t *data, size_t size) {
    int16_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_int32(int32_t *data, size_t size) {
    int32_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_int32(int32_t *data, size_t size) {
    uint32_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_int64(int64_t *data, size_t size) {
    uint64_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_int64(int64_t *data, size_t size) {
    uint64_t _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_float32(float *data, size_t size) {
    float _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_float32(float *data, size_t size) {
    float _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_max_float64(double *data, size_t size) {
    float _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] > _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

size_t _array_min_float64(double *data, size_t size) {
    double _data = data[0];
    size_t _index = 0;
    for(size_t i=0; i < size; i++)
        if(data[i] < _data) {
            _data = data[i];
            _index = i;
        }
    return _index;
}

void *_maxmin(void *mess)
{
	message *m = (message *)mess;
    size_t index = 0;
    void *data = m->data;
    size_t *pindex = m->pindex;
    size_t size = m->size;
    size_t bindex = m->bindex;
    dtype type = m->type;
    int max_min = m->max_min;
	switch(type) {
		case uint8:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_uint8(data, pindex, size) : _array_max_uint8((uint8_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_uint8(data, pindex, size) : _array_min_uint8((uint8_t *)data + bindex, size);
            }
			break;
		case uint16:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_uint16(data, pindex, size) : _array_max_uint16((uint16_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_uint16(data, pindex, size) : _array_min_uint16((uint16_t *)data + bindex, size);
            }
			break;
		case uint32:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_uint32(data, pindex, size) : _array_max_uint32((uint32_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_uint32(data, pindex, size) : _array_min_uint32((uint32_t *)data + bindex, size);
            }
			break;
		case uint64:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_uint64(data, pindex, size) : _array_max_uint64((uint64_t *)data + bindex, size);
            }
            else if(MIN == max_min) {
                index = pindex ? _slice_min_uint64(data, pindex, size) : _array_min_uint64((uint64_t *)data + bindex, size);
            }
			break;
		case int8:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_int8(data, pindex, size) : _array_max_int8((int8_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_int8(data, pindex, size) : _array_min_int8((int8_t *)data + bindex, size);
            }
			break;
		case int16:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_int16(data, pindex, size) : _array_max_int16((int16_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_int16(data, pindex, size) : _array_min_int16((int16_t *)data + bindex, size);
            }
			break;
		case int32:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_int32(data, pindex, size) : _array_max_int32((int32_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_int32(data, pindex, size) : _array_min_int32((int32_t *)data + bindex, size);
            }
			break;
		case int64:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_int64(data, pindex, size) : _array_max_int64((int64_t *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_int64(data, pindex, size) : _array_min_int64((int64_t *)data + bindex, size);
            }
			break;
		case float32:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_float32(data, pindex, size) : _array_max_float32((float *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_float32(data, pindex, size) : _array_min_float32((float *)data + bindex, size);
            }
            break;
		case float64:
            if     (MAX == max_min) {
                index = pindex ? _slice_max_float64(data, pindex, size) : _array_max_float64((double *)data + bindex, size);
            } else if(MIN == max_min) {
                index = pindex ? _slice_min_float64(data, pindex, size) : _array_min_float64((double *)data + bindex, size);
            }
		default:
			break;
	}
	m->index = index + m->bindex;
    return 0;
}

size_t _mess_maxmin(message *mess, int mess_num, int max_min)
{
    size_t index = mess->index;
    void *data = mess->data;
	switch(mess->type) {
		case uint8:
            if(MAX == max_min) {
                for(int i=0; i < mess_num - 1; i++)
                    if(*((uint8_t *)data + index) < (*((uint8_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num - 1; i++)
                    if(*((uint8_t *)data + index) > (*((uint8_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case uint16:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((uint16_t *)data + index) < (*((uint16_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((uint16_t *)data + index) > (*((uint16_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case uint32:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((uint32_t *)data + index) < (*((uint32_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((uint32_t *)data + index) > (*((uint32_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case uint64:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((uint64_t *)data + index) < (*((uint64_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((uint64_t *)data + index) > (*((uint64_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case int8:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int8_t *)data + index) < (*((int8_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int8_t *)data + index) > (*((int8_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case int16:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int16_t *)data + index) < (*((int16_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int16_t *)data + index) > (*((int16_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case int32:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int32_t *)data + index) < (*((int32_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int32_t *)data + index) < (*((int32_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case int64:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int64_t *)data + index) < (*((int64_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if (MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((int64_t *)data + index) < (*((int64_t *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case float32:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((float *)data + index) < (*((float *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((float *)data + index) < (*((float *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		case float64:
            if(MAX == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((double *)data + index) < (*((double *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            } else if(MIN == max_min) {
                for(int i=0; i < mess_num; i++)
                    if(*((double *)data + index) < (*((double *)data + (mess+i)->index)))
                        index = (mess+i)->index;
            }
			break;
		default:
			break;
	}
    return index;
}

message *_init_slice_mess(array *arr, int thread_num, int max_min)
{
    message *mess;
    if(!(mess = calloc(thread_num, sizeof(message))))  
        return 0;
    size_t avg_size;
    size_t bindex = 0;
    avg_size = arr->slice->size / thread_num;
    for(int i=0; i < thread_num - 1; i++) {
        (mess+i)->size = avg_size;
        (mess+i)->bindex = bindex;
        (mess+i)->data = arr->data;
        (mess+i)->pindex = arr->slice->index+bindex;
        (mess+i)->type = arr->type;
        (mess+i)->max_min = max_min;
        bindex += avg_size;
    }
    (mess+thread_num-1)->data = arr->data;
    (mess+thread_num-1)->bindex = bindex;
    (mess+thread_num-1)->size = arr->slice->size - bindex;
    (mess+thread_num-1)->pindex = arr->slice->index+bindex;
    (mess+thread_num-1)->type = arr->type;
    (mess+thread_num-1)->max_min = max_min;
    return mess;
}

message *_init_array_mess(array *arr, int thread_num, int max_min)
{
    message *mess;
    if(!(mess = calloc(thread_num, sizeof(message))))  
        return 0;
    size_t avg_size;
    size_t bindex = 0;
    avg_size = arr->size / thread_num;
    for(int i=0; i < thread_num - 1; i++) {
       (mess+i)->data = arr->data;
       (mess+i)->size = avg_size;
       (mess+i)->type = arr->type;
       (mess+i)->bindex = bindex;
       (mess+i)->max_min = max_min;
       bindex += avg_size;
    }
    (mess+thread_num - 1)->data = arr->data;
    (mess+thread_num - 1)->bindex = bindex;
    (mess+thread_num - 1)->size = arr->size - bindex;
    (mess+thread_num - 1)->type = arr->type;
    (mess+thread_num - 1)->max_min = max_min;
	return mess;
}

message *_init_mess(array *arr,int thread_num, int max_min) {
    return arr->slice ? _init_slice_mess(arr, thread_num, max_min) : _init_array_mess(arr, thread_num, max_min);
}

size_t amaxmin_no_thread(array *arr, int max_min) 
{
	message *mess;
    size_t index = -1;
    if(!(mess = _init_mess(arr, 1, max_min)))
        return -1;
    _maxmin(mess);
	index = mess->index;
    free(mess);
    return index;
}

size_t amaxmin_thread(array *arr, int max_min)
{
    int thread_num = sysconf(_SC_NPROCESSORS_CONF);
    pthread_t *threads;
    if(!(threads = calloc(thread_num, sizeof(pthread_t))))
        return -1;
	message *mess;
    size_t index = -1;
    if(!(mess = _init_mess(arr, thread_num, max_min))) {
        free(threads);
        return -1;
    }
    for(int i=0; i < thread_num; i++) 
		pthread_create(threads+i, NULL, _maxmin, mess+i);
    for(int i=0; i < thread_num; i++) 
        pthread_join(*(threads+i), NULL);
    index = _mess_maxmin(mess, thread_num, max_min);
    free(threads);
    free(mess);
    return index;
}

size_t amaxmin(array *arr, int max_min)
{
    size_t size = arr->slice ? arr->slice->size : arr->size;
    
	return size > USE_MULTHREAD_SIZE ? amaxmin_thread(arr, max_min) : amaxmin_no_thread(arr, max_min);
}

size_t amax(array *arr) 
{
    return amaxmin(arr, MAX);
}

size_t amin(array *arr) 
{
    return amaxmin(arr, MIN);
}

