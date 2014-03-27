# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-configtool/Makefile 339153 2014-01-08 16:12:38Z vanilla $

PORTNAME=	fcitx-configtool
PORTVERSION=	0.4.8
CATEGORIES=	chinese x11
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Fcitx IM framework configuration tool

LICENSE=	GPLv2

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/iso-codes.pc:${PORTSDIR}/misc/iso-codes \
		${LOCALBASE}/libdata/pkgconfig/dbus-glib-1.pc:${PORTSDIR}/devel/dbus-glib
LIB_DEPENDS=	libfcitx-config.so:${PORTSDIR}/chinese/fcitx

USES=		cmake gettext pkgconfig pathfix tar:xz

OPTIONS_DEFINE=	GTK2 GTK3
OPTIONS_DEFAULT=GTK2

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGTK2}
CMAKE_ARGS+=	-DENABLE_GTK2=ON
USE_GNOME+=	gtk20
PLIST_SUB+=	GTK2=""
.else
PLIST_SUB+=	GTK2="@comment "
.endif

.if ${PORT_OPTIONS:MGTK3}
USE_GNOME+=	gtk30
PLIST_SUB+=	GTK3=""
.else
CMAKE_ARGS+=	-DENABLE_GTK3=OFF
PLIST_SUB+=	GTK3="@comment "
.endif

.if !${PORT_OPTIONS:MGTK2} && !${PORT_OPTIONS:MGTK3}
IGNORE=		a GUI is required
.endif

.include <bsd.port.mk>
