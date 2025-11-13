#include <stdio.h>

int leap_year(int year);
int month_calc(int year, int month);
int month_first_calc(int year, int month);
void print_days(int week);

int main() {

	int year, month, week;

	printf("Enter year, month, first day of week (1=Mon, 2=Tue, 3=Wed, ..., 7=Sun): ");
	scanf("%d %d %d", &year, &month, &week);

	if ((year < 1) || (year > 9999)) {
		printf("Wrong Input ! \n");
		return 0;
	}

	if ((month < 1) || (month > 12)) {
		printf("Wrong Input ! \n");
		return 0;
	}

	if ((week < 1) || (week > 7)) {
		printf("Wrong Input ! \n");
		return 0;
	}

	char month_names[12][3] = {
		{'J','a','n'}, {'F','e','b'}, {'M','a','r'}, {'A','p','r'},
        {'M','a','y'}, {'J','u','n'}, {'J','u','l'}, {'A','u','g'},
        {'S','e','p'}, {'O','c','t'}, {'N','o','v'}, {'D','e','c'}
	};

	printf("\n\t %d ", year);
    printf("%c%c%c\n", month_names[month-1][0], month_names[month-1][1], month_names[month-1][2]);

	print_days(week);
	printf("\n");

	int days_in_month = month_calc(year, month);
    int start_day_of_month = month_first_calc(year, month);

	int padding = (start_day_of_month - week + 7) % 7;

	int calendar[6][7] = {};

	int day_count = 1;
    for (int i = 0; i < 6; i++) // 주
        for (int j = 0; j < 7; j++) { // 일
            if (i == 0 && j < padding)
                calendar[i][j] = 0;
            else if (day_count <= days_in_month) {
                calendar[i][j] = day_count;
                day_count++;
            } else
                calendar[i][j] = 0;
        }

	for (int i = 0; i < 6; i++) {
        int row_has_data = 0;
        
        for (int j = 0; j < 7; j++) {
            if (calendar[i][j] == 0)
                printf("    "); 
            else {
                printf("%3d ", calendar[i][j]); 
                row_has_data = 1;
            }
        }
        
        if (row_has_data == 0)
            break; 
        printf("\n");
    }

    return 0;
}


int leap_year(int year) { 
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0; 
    }
}


void print_days(int week) {
    char day_names[7][3] = {
        {'M','o','n'}, {'T','u','e'}, {'W','e','d'}, 
        {'T','h','u'}, {'F','r','i'}, {'S','a','t'}, {'S','u','n'}
    };

    int start_index = week - 1;
    
    for (int i = start_index; i < 7; i++) {
        printf("%c%c%c ", day_names[i][0], day_names[i][1], day_names[i][2]);
    }
    for (int i = 0; i < start_index; i++) {
        printf("%c%c%c ", day_names[i][0], day_names[i][1], day_names[i][2]);
    }
}


int month_calc(int year, int month) {
		switch(month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				return 31;
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				return 30;
				break;
			
			case 2:
				if(leap_year(year) == 1) {
					return 29;
					break;
				} else {
					return 28;
					break;
				}

			default:
			printf("Wrong Month ! \n");
		}
}	


int month_first_calc(int year, int month)
{
	int total = 0;

	for(int i=1; i<year; i++)
	{
		if (leap_year(i) == 1) {
            total += 366;
        } else {
            total += 365;
        }
	}

	for(int i=1; i<month; i++)
		total += month_calc(year, i);

	return (total % 7) + 1;
}
