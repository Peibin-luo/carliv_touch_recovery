/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <linux/input.h>

#include "recovery_ui.h"
#include "common.h"
#include "extendedcommands.h"

char* MENU_HEADERS[] = { NULL };

char* MENU_ITEMS[] = { "Power Menu",
                       "Install zip",
                       "Wipe Menu",
                       "Backup/Restore",
                       "Mounts/Storage",
                       "Advanced Menu",
                       "Carliv",
                       "Reboot Phone",
                       NULL };

void device_ui_init(UIParameters* ui_parameters) {
}

int device_recovery_start() {
    return 0;
}

int device_wipe_data() {
    return 0;
}

int device_wipe_cache() {
    return 0;
}

int device_wipe_dalvik_cache() {
    return 0;
}

int device_wipe_all() {
    return 0;
}

int device_perform_action(int which) {
    return which;
}

extern int device_reboot_now(volatile char* key_pressed, int key_code);

// call a clean reboot
void reboot_main_system(int cmd, int flags, char *arg);

