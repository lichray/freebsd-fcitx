# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-chewing/Makefile 356156 2014-06-01 16:43:03Z ohauer $

PORTNAME=	fcitx-chewing
PORTVERSION=	0.2.2
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Chewing support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libchewing.so:${PORTSDIR}/chinese/libchewing

USES=		tar:xz cmake gettext pkgconfig
INSTALLS_ICONS=	yes

.include <bsd.port.mk>
