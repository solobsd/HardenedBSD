#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD$

.include <src.opts.mk>

PROG=		xinstall
PROGNAME=	install
SRCS=		xinstall.c getid.c
MAN=		install.1

.PATH:		${SRCTOP}/contrib/mtree
CFLAGS+=	-I${SRCTOP}/contrib/mtree
CFLAGS+=	-I${SRCTOP}/lib/libnetbsd
<<<<<<< HEAD
CFLAGS+=	-DHAVE_STRUCT_STAT_ST_FLAGS=1
=======
>>>>>>> 930409367ecf72a59ee5666730e1b84ac90527b2

LIBADD=	md

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
