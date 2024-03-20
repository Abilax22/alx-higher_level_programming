#include <stdio.h>
#include <stdlib.h>

void print_list_info(){
    int list[] = {1, 2, 3, 4, 5};
    int size = sizeof(list) / sizeof(list[0]);
    printf("Python List Info:\n");
    printf("Number of elements in the list: %d
", size);
    printf("Size of each element in the list: %d bytes
", sizeof(list[0]));
}

void print_bytes_info(){
    unsigned char bytes[] = {0x12, 0x34, 0x56, 0x78};
    int size = sizeof(bytes) / sizeof(bytes[0]);
    printf("Python Bytes Object Info:\n");
    printf("Number of bytes in the object: %d
", size);
}
