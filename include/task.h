#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <time.h>

typedef struct {
    char *name;
    char *description;
    time_t created_at;
    bool is_completed;
} Task;

Task new_task(const char *name, const char *description);
void mark_as_completed(Task *task);

// will also free the memory
void delete_task(Task *task);
