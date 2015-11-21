#pragma once

/* NOTE(yao): the core file should be where everything related to the
 * event driven stuff is handled, it is not a replacement of main()
 */

#include <core/admin.h>
#include <core/server.h>
#include <core/worker.h>

#include <cc_define.h>
#include <channel/cc_channel.h>

struct addrinfo;
struct request;
struct response;

rstatus_i core_setup(struct addrinfo *data_ai, struct addrinfo *admin_ai,
                     uint32_t max_conns, int bg_intvl,
                     server_metrics_st *smetrics, worker_metrics_st *wmetrics);
void core_teardown(void);
void core_run(void);
