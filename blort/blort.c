/*
 * Copyright 2013 the DL Example Authors (Dan Bornstein et alia).
 * Licensed AS IS and WITHOUT WARRANTY under the Apache License,
 * Version 2.0. Details: <http://www.apache.org/licenses/LICENSE-2.0>
 */

void hook(const char *);

// TODO: Maybe also use `__attribute((weak))`.
static void init(void) __attribute__((constructor));
static void init(void) {
    hook("init() called inside blort.");
}

void run(void) {
    hook("run() called inside blort.");
}
