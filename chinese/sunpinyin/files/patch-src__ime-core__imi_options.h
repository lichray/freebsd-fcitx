--- ./src/ime-core/imi_options.h.orig	2012-07-18 13:25:59.000000000 +0900
+++ ./src/ime-core/imi_options.h	2014-03-27 23:17:44.000000000 +0900
@@ -52,7 +52,7 @@
 #include "pinyin/hunpin_seg.h"
 
 #ifndef SUNPINYIN_USERDATA_DIR_PREFIX
-#define SUNPINYIN_USERDATA_DIR_PREFIX ".sunpinyin"
+#define SUNPINYIN_USERDATA_DIR_PREFIX "sunpinyin"
 #endif
 
 struct CSimplifiedChinesePolicy : public IConfigurable {
