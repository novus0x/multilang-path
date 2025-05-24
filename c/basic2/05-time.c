#include <stdio.h>
#include <time.h>

int main() {
	time_t epoch = time(NULL); // Current time
	printf("[+] Seconds since 1970: %ld\n", epoch);
	struct tm now;
	localtime_r(&epoch, &now);
	printf("[+] Current time is: %02d:%02d:%02d\n", now.tm_hour, now.tm_min, now.tm_sec);

	return 0;
}
