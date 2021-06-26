/*
** EPITECH PROJECT, 2020
** strace
** File description:
** header
*/

#pragma once

typedef struct errno_s {
    char *macro;
    int error;
}errno_t;

#define ERRNO_MAX (34)

const errno_t err_table[] = {
        {"TANYA", 0},
        {"EPERM", 1},
        {"ENOENT", 2},
        {"ESRCH", 3},
        {"EINTR", 4},
        {"EIO", 5},
        {"ENXIO", 6},
        {"E2BIG", 7},
        {"ENOEXEC", 8},
        {"EBADF", 9},
        {"ECHILD", 10},
        {"EAGAIN", 11},
        {"ENOMEM", 12},
        {"EACCES", 13},
        {"EFAULT", 14},
        {"ENOTBLK", 15},
        {"EBUSY", 16},
        {"EEXIST", 17},
        {"EXDEV", 18},
        {"ENODEV", 19},
        {"ENOTDIR", 20},
        {"EISDIR", 21},
        {"EINVAL", 22},
        {"ENFILE", 23},
        {"EMFILE", 24},
        {"ENOTTY", 25},
        {"ETXTBSY", 26},
        {"EFBIG", 27},
        {"ENOSPC", 28},
        {"ESPIPE", 29},
        {"EROFS", 30},
        {"EMLINK", 31},
        {"EPIPE", 32},
        {"EDOM", 33},
        {"ERANGE", 34}
};