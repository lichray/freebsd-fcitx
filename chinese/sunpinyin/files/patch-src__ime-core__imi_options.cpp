--- ./src/ime-core/imi_options.cpp.orig	2012-05-14 12:55:19.000000000 +0900
+++ ./src/ime-core/imi_options.cpp	2014-03-27 21:26:34.000000000 +0900
@@ -73,12 +73,15 @@
 
     if (!m_user_data_dir.size()) {
         char path[256];
-        const char *home = getenv("HOME");
-        snprintf(path,
-                 sizeof(path),
-                 "%s/%s",
-                 home,
-                 SUNPINYIN_USERDATA_DIR_PREFIX);
+        const char *home = getenv("XDG_CONFIG_HOME");
+        if (home == NULL)
+            snprintf(path, sizeof(path),
+                     "%s/.config/%s", getenv("HOME"),
+                     SUNPINYIN_USERDATA_DIR_PREFIX);
+        else
+            snprintf(path, sizeof(path),
+                     "%s/%s", home,
+                     SUNPINYIN_USERDATA_DIR_PREFIX);
         m_user_data_dir = path;
     }
 
