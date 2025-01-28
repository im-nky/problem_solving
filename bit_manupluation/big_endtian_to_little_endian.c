//uint32_t a = 0x01234567;
//           = 0x67452301;      

#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a=0x01234567;
    uint32_t first_byte = 0xff000000 & a;
    uint32_t secnd_byte = 0x00ff0000 & a;
    uint32_t third_byte = 0x0000ff00 & a;
    uint32_t fouth_byte = 0x000000ff & a;
    
    printf("%x",fouth_byte<<24 | third_byte << 8 | secnd_byte >> 8 | first_byte >> 24);
    return 0;
}
