# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-googlepinyin/Makefile 382798 2015-03-31 07:08:00Z delphij $

PORTNAME=	fcitx-googlepinyin
PORTVERSION=	0.1.6
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Libgooglepinyin support for Fcitx

LICENSE=	GPLv3

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libgooglepinyin.so:${PORTSDIR}/chinese/libgooglepinyin

USES=		tar:xz cmake gettext pkgconfig iconv
USE_GNOME=	intltool
INSTALLS_ICONS=	yes

PROJECTHOST=	fcitx

.include <bsd.port.mk>
