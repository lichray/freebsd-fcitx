--- ./src/lexicon/pytrie_gen.cpp.orig	2012-05-14 12:55:19.000000000 +0900
+++ ./src/lexicon/pytrie_gen.cpp	2014-03-27 21:26:34.000000000 +0900
@@ -10,6 +10,7 @@
 #include <iconv.h>
 #endif
 
+#include <stdlib.h>
 #include <algorithm>
 
 #include "pytrie_gen.h"
