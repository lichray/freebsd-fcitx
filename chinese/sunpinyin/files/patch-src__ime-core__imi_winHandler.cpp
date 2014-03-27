--- ./src/ime-core/imi_winHandler.cpp.orig	2012-05-14 12:55:19.000000000 +0900
+++ ./src/ime-core/imi_winHandler.cpp	2014-03-27 21:26:34.000000000 +0900
@@ -87,6 +87,7 @@
 void
 CIMIWinHandler::updateStatus(int key, int value)
 {
+#ifdef DEBUG
     switch (key) {
     case STATUS_ID_CN:
         printf("CN status is "); break;
@@ -101,4 +102,5 @@
 
     printf("%d\n", value);
     fflush(stdout);
+#endif
 }
