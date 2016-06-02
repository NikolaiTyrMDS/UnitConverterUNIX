#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double parsing(char *MEASUREMENT)
{
	double res;
	int i = 0;

	for(i = 0; i < strlen(MEASUREMENT); i++) {
        if(((MEASUREMENT[i] >= 0x30 && MEASUREMENT[i] <= 0x39) || (MEASUREMENT[i] == 0x2C || MEASUREMENT[i] == 0x2E)) == 0) {
            
            return -1.111;
        }
	}

    for(i = 0; MEASUREMENT[i] != '\0'; i++) {
        if(MEASUREMENT[i] == ',')
            MEASUREMENT[i] = '.';
    }

	res = atof(MEASUREMENT);
	return res;
}

int parsing_id(char *MEASUREMENT)
{
	double res;
	int i = 0;

	for(i = 0; i < strlen(MEASUREMENT); i++) {
        if((MEASUREMENT[i] >= 0x30 && MEASUREMENT[i] <= 0x39) == 0) {
			return 0;
        }
	}
	res = atoi(MEASUREMENT);
	return res;
}

