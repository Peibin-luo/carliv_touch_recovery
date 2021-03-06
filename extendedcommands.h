extern int signature_check_enabled;
extern int script_assert_enabled;
extern int md5_check_enabled;
extern int minimum_storage;

void
write_recovery_version();

void
toggle_signature_check();

void
toggle_script_assert_check();

void
toggle_md5_check();

void show_power_menu();

void
show_choose_zip_menu();

int
do_nandroid_backup(const char* backup_name);

int
do_nandroid_restore();

void
show_nandroid_restore_menu(const char* path);

void
show_nandroid_advanced_restore_menu(const char* path);

void show_wipe_menu();

void
show_nandroid_menu();

void
show_partition_menu();

void partition_sdcard(const char* volume);

int
install_zip(const char* packagefilepath);

int
__system(const char *command);

void show_rainbow_menu();

void show_carliv_menu();

void
show_advanced_menu();

int device_wipe_all();

int device_wipe_data();

int device_wipe_cache();

int device_wipe_dalvik_cache();

void wipe_data(int confirm);

void wipe_cache(int confirm);

void wipe_dalvik_cache(int confirm);

void wipe_all(int confirm);

int format_unknown_device(const char *device, const char* path, const char *fs_type);

void create_fstab();

int has_datadata();

void handle_failure(int ret);

void process_volumes();

int extendedcommand_file_exists();

void show_install_update_menu();

int confirm_selection(const char* title, const char* confirm);

int run_and_remove_extendedcommand();

int show_lowspace_menu(int i, const char* backup_path);

int show_choose_delete_menu();

int verify_root_and_recovery();

void write_recovery_version();

#ifdef RECOVERY_EXTEND_NANDROID_MENU
void extend_nandroid_menu(char** items, int item_count, int max_items);
void handle_nandroid_menu(int item_count, int selected);
#endif