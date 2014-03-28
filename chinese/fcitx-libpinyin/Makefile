# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-libpinyin/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-libpinyin
PORTVERSION=	0.3.1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/:body \
		http://download.fcitx-im.org/data/:data
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:body \
		model.text.${_MODEL_VER}.tar.gz:data
DIST_SUBDIR=	fcitx
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	lichray@gmail.com
COMMENT=	The libpinyin support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libpinyin.so:${PORTSDIR}/chinese/libpinyin

USE_LDCONFIG=	${PREFIX}/lib/fcitx/
USES=		cmake gettext pkgconfig tar:xz
INSTALLS_ICONS=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
_MODEL_VER=	20130308

post-patch:
	@${CP} ${_DISTDIR}/model.text.${_MODEL_VER}.tar.gz ${WRKSRC}/data/.

.include <bsd.port.mk>
