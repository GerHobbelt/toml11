
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int toml11_boost_container_example_main(int argc, const char** argv);
int toml11_boost_multiprecision_example_main(void);
int toml11_parse_array_example_main(void);
int toml11_parse_array_of_tables_example_main(void);
int toml11_parse_key_example_main(void);
int toml11_parse_spec_example_main(void);
int toml11_reflect_example_main(void);
int toml11_u8string_example_main(void);
int toml11_canonicalize_example_main(int argc, const char** argv);

int toml11_expand_tool_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
