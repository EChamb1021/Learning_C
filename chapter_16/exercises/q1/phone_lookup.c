/*
Write a program that asks the user to enter an international dialing code and then looks
it up in the country_codes array. If there is a country associated with the code, return
the country name. Otherwise, return an error message.
*/

#include <stdio.h>

#define NUM_COUNTRIES 32

struct dialing_code {
    char *country;
    int code;
};

const struct dialing_code country_codes[] = {
    {"Argentina",            54},
    {"Brazil",               55},
    {"China",                86},
    {"Congo, Dem. Rep. of", 243},
    {"Ethiopia",            251},
    {"Germany",              49},
    {"Bangladesh",          880},
    {"Burma (Myanmar)",      95},
    {"Colombia",             57},
    {"Egypt",                20},
    {"France",               33},
    {"India",                91},
    {"Indonesia",            62},
    {"Italy",                39},
    {"Mexico",               52},
    {"Pakistan",             92},
    {"Poland",               48},
    {"South Africa",         27},
    {"Spain",                34},
    {"Thailand",             66},
    {"Ukraine",             380},
    {"United States",         1},
    {"Iran",                 98},
    {"Japan",                81},
    {"Nigeria",             234},
    {"Philippines",          63},
    {"Russia",                7},
    {"South Korea",          82},
    {"Sudan",               249},
    {"Turkey",               90},
    {"United Kingdom",       44},
    {"Vietnam",              84},
};

int main(void){

    int code;

    printf("Enter dialing code: ");
    scanf("%d", &code);

    for(int i = 0; i < NUM_COUNTRIES; i++){
        if(country_codes[i].code == code){
            printf("Country: %s\n", country_codes[i].country);
            return 0;
        }
    }

    printf("Error: No country with specified dialing code.\n");

    return 0;
    
}