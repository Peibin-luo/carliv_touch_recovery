LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := libubi.c ubiutils-common.c
LOCAL_MODULE := libubi
LOCAL_MODULE_TAGS := eng
include $(BUILD_EXECUTABLE)

