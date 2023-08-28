#include <stdio.h>


struct dialing_code {
    char *country;
    int code;
};


int main(void) {
    const struct dialing_code country_codes[] = 
        {{"Argentina",            54}, {"Bangladesh",     880},
         {"Brazil",               55}, {"Burma (Myanmar)", 95},
         {"China",                86}, {"Colombia",        57},
         {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
         {"Ethiopia",            251}, {"France",          33},
         {"Germany",              49}, {"India",           91},
         {"Indonesia",            62}, {"Iran",            98},
         {"Italy",                39}, {"Japan",           81},
         {"United Kingdom",       44}, {"United States",    1}};

    int code;


    printf("Enter a internation dialing code to see if it exists: ");
    scanf("%d", &code);

    for (int i = 0; i < 18; i++) {
        if (code == country_codes[i].code) {
            printf("%s\n", country_codes[i].country);
            return 0;
        }
    }

    printf("Country not found for entered country code.\n");
    
}
