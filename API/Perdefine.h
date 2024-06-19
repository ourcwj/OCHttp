#pragma once
// 重要的核心文件，定义了最基础的宏定义
// 用于自动更改某些特殊用途的宏定义在不同引用中的行为
//

#ifndef OCPERDEF

// 判断是否为cpp编译器，并更改行为
#ifdef __cplusplus				// 是C++编译器行为
#define EXTERNMODE
#endif // __cplusplus
#ifndef __cplusplus				// 非C++编译器行为
#define EXTERNMODE extern "C"
#endif // !cplusplus

// 定义OCAPI，用于自动适应导出和生成
#ifndef OCAPI
#define OCAPI EXTERNMODE __declspec(dllimport)
#ifdef buildDLL
#undef OCAPI
#define OCAPI EXTERNMODE __declspec(dllexport)
#endif // buildDLL
#ifdef buildLIB
#undef OCAPI
#define OCAPI
#endif // buildLIB
#endif // !OCAPI



#define OCPERDEF
#endif // !OCPERDEF
