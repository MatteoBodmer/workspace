// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef MESSAGES_FR3__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define MESSAGES_FR3__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_messages_fr3 __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_messages_fr3 __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_messages_fr3 __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_messages_fr3 __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_messages_fr3
    #define ROSIDL_GENERATOR_CPP_PUBLIC_messages_fr3 ROSIDL_GENERATOR_CPP_EXPORT_messages_fr3
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_messages_fr3 ROSIDL_GENERATOR_CPP_IMPORT_messages_fr3
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_messages_fr3 __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_messages_fr3
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_messages_fr3 __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_messages_fr3
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_FR3__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
