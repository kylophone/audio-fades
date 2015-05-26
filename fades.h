#include <math.h>

#define LINEAR_IN 0
#define HALF_SINE_IN 1
#define LOG_IN 2
#define LINEAR_OUT 3
#define HALF_SINE_OUT 4
#define LOG_OUT 5

float fade_envelope(int this_fade, int fade_length, int sample_number) {
    switch (this_fade) {
        case LINEAR_IN:
            return (float) sample_number / fade_length;
        case HALF_SINE_IN:
            return sin(M_PI / 2 * sample_number / fade_length);
        case LOG_IN:
            return log(1 + (((float) sample_number / fade_length) * (M_E - 1)));
        case LINEAR_OUT:
            return 1.0 - ((float) sample_number / fade_length);
        case HALF_SINE_OUT:
            return 1.0 - (sin(M_PI / 2 * sample_number / fade_length));
        case LOG_OUT:
            return 1.0 - (log(1 + (((float) sample_number / fade_length) * (M_E - 1))));
        default:
            return 1.0;
    }
}
