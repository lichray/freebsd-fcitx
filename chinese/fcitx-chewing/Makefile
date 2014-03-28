# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-chewing/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-chewing
PORTVERSION=	0.2.1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Chewing support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libchewing.so:${PORTSDIR}/chinese/libchewing

USES=		cmake gettext pkgconfig tar:xz
USE_GNOME=	intltool
INSTALLS_ICONS=	yes

.include <bsd.port.mk>
