#include <sys/cdefs.h>
__FBSDID("$FreeBSD$");

/*
 * This material, written by Henry Spencer, was released by him
 * into the public domain and is thus not subject to any copyright.
 */

#include <capsicum_helpers.h>
#include <err.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
	int c;
	int status = 0;

<<<<<<< HEAD
	if (caph_limit_stdio() < 0 || caph_enter() < 0)
=======
	if (caph_limit_stdio() < 0 || (cap_enter() < 0 && errno != ENOSYS))
>>>>>>> 930409367ecf72a59ee5666730e1b84ac90527b2
		err(1, "capsicum");

	optind = 2;	/* Past the program name and the option letters. */
	while ((c = getopt(argc, argv, argv[1])) != -1)
		switch (c) {
		case '?':
			status = 1;	/* getopt routine gave message */
			break;
		default:
			if (optarg != NULL)
				printf(" -%c %s", c, optarg);
			else
				printf(" -%c", c);
			break;
		}
	printf(" --");
	for (; optind < argc; optind++)
		printf(" %s", argv[optind]);
	printf("\n");
	return status;
}
