#include <cstdio>
#include "AccelerometerProcess.h"

int main()
{
    printf("hello from %s!\n", "ConsoleApplication1");
    int AccelFD = accelerometer_init();
    accelerometer_reset(AccelFD);
    accelerometerSetFastRead(AccelFD);
    uint16_t data[3];
    getFastAcceration(AccelFD, data);
    printf("x = %d, y = %d, z =%d\n", data[0], data[1], data[2]);

    return 0;
}