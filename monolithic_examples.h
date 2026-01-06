
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int qoi_convert_main(int argc, const char** argv);
int qoi_benchmark_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
