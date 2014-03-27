# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-rime/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-rime
PORTVERSION=	0.3.0
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	RIME support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		librime.so:${PORTSDIR}/chinese/librime
RUN_DEPENDS=	${LOCALBASE}/share/brise/default.yaml:${PORTSDIR}/chinese/brise

# need? # USE_LDCONFIG=	${PREFIX}/lib/fcitx/
USES=		cmake gettext pkgconfig tar:xz
INSTALLS_ICONS=	yes

CMAKE_ARGS+=	-DBRISE_DIR=${LOCALBASE}/share/brise

.include <bsd.port.mk>
