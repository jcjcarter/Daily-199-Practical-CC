// Daily 199 Practical CC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <unistd.h>

int main() {
	unsigned char b[85], i, j, k, p[26] = "8r2e0ddi6t!Z@?>#943hi!715";
	while (putchar('\n'), read(0, b, 84))
		for (i = j = 0; i < 27; i += 3, putchar(p[j]), j = 0)
			for (k = 11; k < 16; k++)
				j = (j << 1) | !(b[i + p[k] - 34] - 32);
	return 0;
}

