# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/japanese/fcitx-anthy/Makefile 374303 2014-12-08 16:48:38Z tijl $

PORTNAME=	fcitx-anthy
PORTVERSION=	0.2.1
CATEGORIES=	japanese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Anthy support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libanthy.so:${PORTSDIR}/japanese/anthy

USES=		cmake gettext pkgconfig tar:xz
INSTALLS_ICONS=	yes

.include <bsd.port.mk>
