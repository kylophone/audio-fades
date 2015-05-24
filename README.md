# audio-fades
Example audio fades. Linear, log, and half-sine.

```c
#include <stdio.h>
#include <math.h>

#define NUM_SAMPLES 48000 

int main(void) {
    for(int i = 0; i <= NUM_SAMPLES; i++) {
        //FADE-IN
        float linear_in = i / NUM_SAMPLES;
        float half_sine_in = sin(M_PI / 2 * i / NUM_SAMPLES);
        float log_in = log(1 + (((float) i / NUM_SAMPLES) * (M_E - 1)));

        //FADE-OUT
        float linear_out = 1 - linear_in;
        float half_sine_out = 1 - half_sine_in;
        float log_out = 1 - log_fade_in;
    }
}
```
