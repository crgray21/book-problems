#include <stdio.h>

int main(void) {
    int hr, min;
    int closest;

    int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Please enter a preferred departure time (24hr time): ");
    scanf(" %d : %d", &hr, &min);

    min += hr * 60;
    closest = departures[7];

    for (int i = 0; i < 8; ++i) {
        if (min <= departures[i]) {
            if (i == 0) {
                closest = departures[i];
            } else if (min - departures[i - 1] <= departures[i] - min) {
                    closest = departures[i - 1];
            } else {
                    closest = departures[i];
            }
            break;
        }
    }

    printf("The closest time is %d minutes after midnight.\n", closest);

    return 0;
}

