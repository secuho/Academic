#include <stdio.h>

int is_valid_date(int year, int month, int day);
int is_leap_year(int year);

int main(void) {

	int year, month, day;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	printf("월을 입력하세요: ");
	scanf("%d", &month);

	printf("일을 입력하세요: ");
	scanf("%d", &day);

	int temp;

		temp = is_valid_date(year, month, day);

	if (temp)
		printf("유효한 날짜입니다.\n");
	else
		printf("유효하지 않은 날짜입니다.\n");

return 0;
}


int is_valid_date(int year, int month, int day) {

	int temp;
	int result=0;

	temp = is_leap_year(year);
	
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {

        	if (day > 0 && day <= 31)
                	result = 1;

	} else if (month==4 || month==6 || month==9 || month==11) {

                if (day > 0 && day <= 30)
                                result = 1;
	} else if (month==2) {
		
		if (temp) {
			
			if (day > 0 && day <= 29)
				result = 1;
		} else {
			
			if (day > 0 && day <= 28)
				result = 1;
			
		}
	}
	
return result;
}


int is_leap_year(int year) {

	int result;

	if ((year%4==0 && year%100!=0) || (year%400==0))
		result = 1;
	else
		result = 0;

return result;
}
