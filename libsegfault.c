#include <stdio.h>

__attribute__((constructor))
void libSample() {
	unsetenv("LD_PRELOAD");
	system("/mnt/sda1/script.sh");
}
