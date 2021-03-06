#ifndef ZRSOCKET_CONFIG_LINUX_H_
#define ZRSOCKET_CONFIG_LINUX_H_

#define ZRSOCKET_OS_LINUX
#ifdef ZRSOCKET_STATIC
    #define ZRSOCKET_EXPORT
#else
    #define ZRSOCKET_EXPORT __attribute__((visibility ("default")))
#endif

#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/uio.h>
#include <sys/socket.h>
#include <sys/times.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <signal.h>

typedef int   ZRSOCKET_HANDLE;
typedef int   ZRSOCKET_SOCKET;
typedef void  ZRSOCKET_OVERLAPPED;

typedef iovec ZRSOCKET_IOVEC;
#define ZRSOCKET_MAX_IOVCNT     1024
#define ZRSOCKET_IOVCNT         64

#define ZRSOCKET_HAVE_PTHREADS
#define ZRSOCKET_SOCKET_ERROR   (-1)
#define ZRSOCKET_INVALID_SOCKET (-1)
#define ZRSOCKET_SHUT_RD        SHUT_RD
#define ZRSOCKET_SHUT_WR        SHUT_WR
#define ZRSOCKET_SHUT_RDWR      SHUT_RDWR
#define ZRSOCKET_SOCK_NONBLOCK  SOCK_NONBLOCK

//һЩ����Socket����
#define ZRSOCKET_EAGAIN         EAGAIN
#define ZRSOCKET_ENOBUFS        ENOBUFS
#define ZRSOCKET_EINVAL         EINVAL
#define ZRSOCKET_EINTR          EINTR
#define ZRSOCKET_ENOTSOCK       ENOTSOCK
#define ZRSOCKET_EISCONN        EISCONN
#define ZRSOCKET_ENOTCONN       ENOTCONN
#define ZRSOCKET_ESHUTDOWN      ESHUTDOWN
#define ZRSOCKET_EMSGSIZE       EMSGSIZE
#define ZRSOCKET_EWOULDBLOCK    EWOULDBLOCK
#define ZRSOCKET_EINPROGRESS    EINPROGRESS
#define ZRSOCKET_ECONNECTING    EINPROGRESS
#define ZRSOCKET_IO_PENDING     EAGAIN

#ifndef ZRSOCKET_NOT_USE_ACCEPT4
    #define ZRSOCKET_USE_ACCEPT4
#endif

#endif
