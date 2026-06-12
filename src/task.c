#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#include "task.h"

Task *new_task(char *name, char *description) {
    static u32 next_id = 1;

    Task *task = malloc(sizeof(*task));
    if (!task) {
        return NULL;
    }

    task->id = next_id++;
    task->name = strdup(name);
    task->description = strdup(description);
    task->created_at = time(NULL);
    task->is_completed = false;

    return task;
}

void mark_as_completed(Task *task) {
    if (task->is_completed == false) {
        task->is_completed = true;
    }

    printf("Marked task as completed");
}

void delete_task(Task *task) {
    if (!task) {
        return;
    }

    free(task->name);
    free(task->description);
    free(task);
}

