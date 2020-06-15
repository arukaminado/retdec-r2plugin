/**
 * @file src/filesystem_wrapper.h
 * @brief Wrapper for conditional include of C++17 filesystem feature.
 * @copyright (c) 2020 Avast Software, licensed under the MIT license.
 */

#ifndef R2PLUGIN_WRAPPERS_FILESYSTEM_H
#define R2PLUGIN_WRAPPERS_FILESYSTEM_H

#if __has_include(<filesystem>)
	#include <filesystem>
	namespace fs = std::filesystem;

#elif __has_include(<experimental/filesystem>)
	#include <experimental/filesystem>
	namespace fs = std::experimental::filesystem;

#else
	#error "Compiler does not have C++17 filesystem feature."

#endif

#endif /*R2PLUGIN_WRAPPERS_FILESYSTEM_H*/
