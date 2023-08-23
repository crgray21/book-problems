#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50    /* maximum number of reminder */
#define MSG_LEN 60       /* max length of reminder message */

int read_line(char str[], int n);


int main(void) {
    char reminders[MAX_REMIND][MSG_LEN + 13];
    char day_str[6], time_str[7], msg_str[MSG_LEN + 1];
    int day, month, hour, minute, i, j, k, num_remind = 0;

    for(;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%02d/%02d", &month, &day);
        if (day == 0 || month == 0)
            break;
        if (day < 0 || day > 31 || month < 0 || month > 12) {
            printf("Invalid day and/or month provided. Please try again...\n");
            continue;
        }
        sprintf(day_str, "%02d/%02d", month, day);

        scanf("%02d:%02d", &hour, &minute);
        if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
            printf("Invalid time provided. Please try again...\n");
            continue;
        }
        sprintf(time_str, " %02d:%02d", hour, minute);

        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++) {
            if (strncmp(day_str, reminders[i], 2) == 0) {
                if (strcmp(time_str + 1, reminders[i] + 3) < 0)
                    break;
            }
            else if (strcmp(day_str, reminders[i]) < 0)
                break;
        }

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}


int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
