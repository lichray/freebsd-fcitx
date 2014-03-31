# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-googlepinyin/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-googlepinyin
PORTVERSION=	0.1.6
CATEGORIES=	chinese
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	A libgooglepinyin support for Fcitx

LICENSE=	GPLv3

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libgooglepinyin.so:${PORTSDIR}/chinese/libgooglepinyin

USES=		cmake gettext pkgconfig tar:xz
USE_GNOME=	intltool
INSTALLS_ICONS=	yes

PROJECTHOST=	fcitx

.if ${OSVERSION} >= 1000000
CMAKE_ARGS+=	-DLIBICONV_SECOND_ARGUMENT_IS_CONST=1
.endif

.include <bsd.port.mk>
