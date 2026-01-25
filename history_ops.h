#ifndef HISTORY_OPS_H
#define HISTORY_OPS_H

// Save one operation entry to history file
void save_history(const char *operation);

// Display all saved history entries
void view_history();

// Clear all history records
void clear_history();

#endif
