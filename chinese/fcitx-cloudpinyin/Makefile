# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-cloudpinyin/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-cloudpinyin
PORTVERSION=	0.3.3
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	A cloud-based Pinyin module for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		libcurl.so:${PORTSDIR}/ftp/curl

USES=		cmake gettext pkgconfig tar:xz

.include <bsd.port.mk>
