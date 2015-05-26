# audio-fades
Example audio fades. Linear, log, and half-sine.

### fade-types
```c
LINEAR_IN
HALF_SINE_IN
LOG_IN
LINEAR_OUT
HALF_SINE_OUT
LOG_OUT
```
### example
```c
#include <stdio.h>
#include "fades.h"

#define FADE_LENGTH 48000

int main(void) {
    for(int i = 0; i < FADE_LENGTH; i++) {
        printf("%.10f\n", fade_envelope(LOG_IN, FADE_LENGTH - 1, i));
    }
    return 0;
}
```
