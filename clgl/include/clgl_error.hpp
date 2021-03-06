/*
 * =====================================================================================
 *       Filename:  clgl_error.hpp
 *    Description:  
 *        Created:  2014-10-23 16:40
 *         Author:  Tiago Lobato Gimenes        (tlgimenes@gmail.com)
 * =====================================================================================
 */

////////////////////////////////////////////////////////////////////////////////////////

#ifndef CLGL_ERROR_HPP
#define CLGL_ERROR_HPP

////////////////////////////////////////////////////////////////////////////////////////

#ifndef __CL_ENABLE_EXCEPTIONS
#define __CL_ENABLE_EXCEPTIONS
#endif

////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glew.h>
#include <GL/glut.h>
#include <CL/cl.hpp>
#include <GL/gl.h>
#include <string>

////////////////////////////////////////////////////////////////////////////////////////

#ifdef NDEBUG
# define clgl_assert(EX)
# define clgl_mem_debug_info(SIZE);
#else 
# define clgl_assert(EX) __clgl_assert(EX, __FILE__, __LINE__)
# define clgl_mem_debug_info(SIZE) __clgl_mem_debug_info(SIZE, __FILE__, __LINE__)
#endif

////////////////////////////////////////////////////////////////////////////////////////

class CLGLError
{
  public:
    static std::string to_str(int err);
    static std::string to_str(GLenum err);
};

////////////////////////////////////////////////////////////////////////////////////////

void __clgl_assert(GLenum err, const char* file, int line);
void __clgl_assert(int err, const char* file, int line);

void __clgl_mem_debug_info(float size, const char*file, int line);

////////////////////////////////////////////////////////////////////////////////////////

#endif /* !CLGL_ERROR_HPP */

////////////////////////////////////////////////////////////////////////////////////////

