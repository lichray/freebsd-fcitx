# Created by: Tim Niemueller <tim@niemueller.de>
# $FreeBSD: head/devel/yaml-cpp/Makefile 340585 2014-01-21 09:02:38Z bapt $

PORTNAME=	yaml-cpp
PORTVERSION=	0.5.1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	tim@niemueller.de
COMMENT=	YAML parser and emitter in C++ matching the YAML 1.2 spec

LICENSE=	MIT

USES=		cmake
USE_LDCONFIG=	yes
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS:BOOL=ON -DYAML_CPP_BUILD_TOOLS=0 -DPREFIX=${PREFIX}

.include <bsd.port.mk>
