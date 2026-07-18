#include <stdint.h>
// helper fields.
// src_port + dest_port = 4 bytes and seq_num holds 4. total 8 bytes
// The size of array is also exactly 8 bytes.
// which means we can safely access the ports and each int in array.
// convenience of additional fields, with the efficiency of a single memory location!

typedef union PacketHeader {
    struct {
        src_port uint16_t;
        dest_port uint16_t;
        seq_num unint32_t;
    } tcp_header;
    int arr[8];
} packet_header_t;

int main() {
    return 0;
}
