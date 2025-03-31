#pragma once

unsigned short lfsr = 0xACE1u;
unsigned bit;
void set_seed(int s){
    s = (s >> 16) + (s&0xFFFF);
    lfsr += s * lfsr;
    lfsr ^= 0x3015u;
    lfsr ^= 0x71260000u;
}
unsigned int random(){
    unsigned bit;
    bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
    lfsr =  (lfsr >> 1) | (bit << 15);
    int tmp = lfsr;
    return tmp - (tmp << 8) + (tmp << 12) - (tmp << 10) + (tmp << 14);
}

