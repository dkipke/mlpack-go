/**
 * @file capi/perceptron.h
 *
 * This is an autogenerated header file for functions specified to the %NAME%
 * binding to be called by Go.
 */
#ifndef GO_perceptron_H
#define GO_perceptron_H

#include <stddef.h>

#if defined(__cplusplus) || defined(c_plusplus)

extern "C"
{
#endif

extern void mlpackPerceptron();

// Any definitions of methods for dealing with model pointers will be put below
// this comment, if needed.

// Set the pointer to a PerceptronModel parameter.
extern void mlpackSetPerceptronModelPtr(const char* identifier, void* value);

// Get the pointer to a PerceptronModel parameter.
extern void* mlpackGetPerceptronModelPtr(const char* identifier);


#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
