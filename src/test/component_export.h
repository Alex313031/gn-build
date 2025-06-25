#ifndef COMPONENT_EXPORT_H_
#define COMPONENT_EXPORT_H_

#if defined(WIN32)

#if defined(COMPONENT_BUILD)
#define COMPONENT_EXPORT __declspec(dllexport)
#define COMPONENT_EXPORT_PRIVATE __declspec(dllexport)
#else
#define COMPONENT_EXPORT __declspec(dllimport)
#define COMPONENT_EXPORT_PRIVATE __declspec(dllimport)
#endif  // defined(COMPONENT_BUILD)

#else

#if defined(COMPONENT_BUILD)
#define COMPONENT_EXPORT __attribute__((visibility("default")))
#define COMPONENT_EXPORT_PRIVATE __attribute__((visibility("default")))
#else
#define COMPONENT_EXPORT
#define COMPONENT_EXPORT_PRIVATE
#endif  // defined(COMPONENT_BUILD)

#endif

#endif  // COMPONENT_EXPORT_H_
