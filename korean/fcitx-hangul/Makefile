# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/korean/fcitx-hangul/Makefile 360424 2014-07-03 17:33:14Z amdmi3 $

PORTNAME=	fcitx-hangul
PORTVERSION=	0.3.0
CATEGORIES=	korean
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Hangul support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libhangul.so:${PORTSDIR}/korean/libhangul

USES=		cmake gettext pkgconfig tar:xz
INSTALLS_ICONS=	yes

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include <bsd.port.mk>
