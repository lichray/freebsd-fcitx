# $FreeBSD$

PORTNAME=	fcitx-skk
PORTVERSION=	0.1.0
CATEGORIES=	japanese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	hiroto.kagotani@gmail.com
COMMENT=	SKK support for Fcitx

LICENSE=	GPLv3

RUN_DEPENDS=	${LOCALBASE}/share/skk/SKK-JISYO.L:${PORTSDIR}/japanese/skk-jisyo
LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libskk.so:${PORTSDIR}/japanese/libskk

USES=		cmake gettext pkgconfig tar:xz compiler:c++11-lang
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
CMAKE_ARGS+=	-DSKK_DEFAULT_PATH=${LOCALBASE}/share/skk/SKK-JISYO.L

.include <bsd.port.mk>
