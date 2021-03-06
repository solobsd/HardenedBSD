# $FreeBSD$

.include "${SRCTOP}/lib/clang/llvm.pre.mk"

CFLAGS+=	-I${OBJTOP}/lib/clang/libllvm

.include "${SRCTOP}/lib/clang/llvm.build.mk"

# Special case for the bootstrap-tools phase.
.if (defined(TOOLS_PREFIX) || ${MACHINE} == "host") && \
    (${PROG_CXX} == "clang-tblgen" || ${PROG_CXX} == "llvm-tblgen")
LIBDEPS+=	llvmminimal
.else
LIBDEPS+=	llvm
.endif

.for lib in ${LIBDEPS}
DPADD+=		${OBJTOP}/lib/clang/lib${lib}/lib${lib}.a
LDADD+=		${OBJTOP}/lib/clang/lib${lib}/lib${lib}.a
.endfor

PACKAGE=	clang

LIBADD+=	ncursesw
LIBADD+=	pthread
LIBADD+=	z

<<<<<<< HEAD
NOCFI=		yes

=======
>>>>>>> 930409367ecf72a59ee5666730e1b84ac90527b2
.include <bsd.prog.mk>
