# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-ui-light/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-ui-light
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	An alternative light weight UI for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libfontconfig.so:${PORTSDIR}/x11-fonts/fontconfig

USE_XORG=	x11 xft xpm
USES=		cmake gettext pkgconfig tar:bzip2
USE_GNOME=	intltool

.include <bsd.port.mk>
