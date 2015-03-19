# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-rime/Makefile 356156 2014-06-01 16:43:03Z ohauer $

PORTNAME=	fcitx-rime
PORTVERSION=	0.3.1
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	RIME support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx \
		librime.so:${PORTSDIR}/chinese/librime
RUN_DEPENDS=	${LOCALBASE}/share/brise/default.yaml:${PORTSDIR}/chinese/brise

USES=		tar:xz cmake gettext
INSTALLS_ICONS=	yes

CMAKE_ARGS+=	-DBRISE_DIR=${LOCALBASE}/share/brise

.include <bsd.port.mk>
