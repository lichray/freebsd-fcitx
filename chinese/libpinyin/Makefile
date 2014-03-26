# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/libpinyin/Makefile 339152 2014-01-08 15:47:09Z vanilla $

PORTNAME=	libpinyin
PORTVERSION=	1.0.0
CATEGORIES=	chinese textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}

MAINTAINER=	lichray@gmail.com
COMMENT=	Library to deal with pinyin

LICENSE=	GPLv2

USE_BDB=	yes
USE_GNOME=	glib20
USES=		gettext gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=CPPFLAGS="-I${LOCALBASE}/include \
		-I${BDB_INCLUDE_DIR} -D_WITH_GETLINE" \
		LDFLAGS="-L${LOCALBASE}/lib -l${BDB_LIB_NAME}"
INSTALL_TARGET=	install-strip

PLIST_SUB+=	VER=${PORTVERSION}

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800107
IGNORE=		does not compile on FreeBSD 7.X
.endif

.include <bsd.port.post.mk>
