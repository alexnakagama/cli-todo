#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "task.h"

Task *new_task(const char *name, const char *description) {
    Task *task = malloc(sizeof(*task));
    if (!task) {
        return NULL;
    }

    task->name = name;
    task->description = description;
    task->created_at = time(NULL);
    task->is_completed = false;

    printf("New task created");
    return task;
}

void mark_as_completed(Task *task) {
    if (task->is_completed == false) {
        task->is_completed = true;
    }

    printf("Marked task as completed");
}

void delete_task(Task *task) {
    free(task);
}
