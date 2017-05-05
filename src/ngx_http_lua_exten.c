
/*
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef NGX_LUA_NO_FFI_API


#ifndef DDEBUG
#define DDEBUG 0
#endif
#include "ddebug.h"


#include "ngx_http_lua_util.h"


char *
ngx_http_lua_ffi_req_get_ext(ngx_http_request_t *r, size_t *len)
{
    if (r->connection->fd == (ngx_socket_t) -1) {
        return NULL;
    }

    *len = ngx_min(r->exten.len, *len);
    return (char *) r->exten.data;
}


#endif /* NGX_LUA_NO_FFI_API */


/* vi:set ft=c ts=4 sw=4 et fdm=marker: */
