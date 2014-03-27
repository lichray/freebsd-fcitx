# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/sunpinyin/Makefile 344117 2014-02-13 14:18:58Z miwi $

PORTNAME=	sunpinyin
DISTVERSION=	2.0.4rc2
CATEGORIES=	chinese devel
MASTER_SITES=	LOCAL/delphij:1 \
		${MASTER_SITE_GOOGLE_CODE}:1 \
		http://open-gram.googlecode.com/files/:2
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:1 \
		lm_sc.t3g.arpa.tar.bz2:2 dict.utf8.tar.bz2:2
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	lichray@gmail.com
COMMENT=	Statistical language model based input method engine

LICENSE=	LGPL21 CDDL
LICENSE_COMB=	dual

LIB_DEPENDS=	libsqlite3.so:${PORTSDIR}/databases/sqlite3

USES=		scons gmake iconv pkgconfig tar:xz
USE_LDCONFIG=	yes
MAKE_ARGS+=	--prefix=${PREFIX} --libdatadir=${PREFIX}/share
#LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}

post-patch:
	@${CP} ${_DISTDIR}/lm_sc.t3g.arpa.tar.bz2 \
		${_DISTDIR}/dict.utf8.tar.bz2 ${WRKSRC}/raw

.include <bsd.port.mk>
