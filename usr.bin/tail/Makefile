# $FreeBSD$
#	@(#)Makefile	8.1 (Berkeley) 6/6/93

.include <src.opts.mk>

PROG=	tail
SRCS=	forward.c misc.c read.c reverse.c tail.c

<<<<<<< HEAD
HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests
=======
.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif
>>>>>>> 930409367ecf72a59ee5666730e1b84ac90527b2

.include <bsd.prog.mk>
