# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-sunpinyin/Makefile 336173 2013-12-11 14:58:29Z bapt $

PORTNAME=	fcitx-sunpinyin
PORTVERSION=	0.4.1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	SunPinyin support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx
BUILD_DEPENDS=	zh-sunpinyin>=2.0.4.r2:${PORTSDIR}/chinese/sunpinyin
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		cmake gettext pkgconfig tar:xz
INSTALLS_ICONS=	yes

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
