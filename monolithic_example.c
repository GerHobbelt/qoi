
#include "monolithic_examples.h"

#define USAGE_NAME   "qoi_demo"

// load the monolithic definitions which you need for the dispatch table:
#include "monolithic_main_internal_defs.h"

// declare your own monolith dispatch table:
MONOLITHIC_CMD_TABLE_START()
{ "conv", { .fa = qoi_convert_main } },
{ "benchmark", {.fa = qoi_benchmark_main } },
MONOLITHIC_CMD_TABLE_END();

// load the monolithic core dispatcher
#include "monolithic_main_tpl.h"
