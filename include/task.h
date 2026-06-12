#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <time.h>

typedef uint32_t u32;

typedef struct Task {
    u32 id;
    char *name;
    char *description;
    time_t created_at;
    bool is_completed;
} Task;

Task *new_task(char *name, char *description);
void mark_as_completed(Task *task);
void delete_task(Task *task);

