#pragma once
/* This information was generated by the primitive maker (primitiveMaker.self).
Please do not change it manually. -- dmu 12/91  */\
\
/* Copyright 1992-2012 AUTHORS.  */\
\
/* See the LICENSE file for license information.  */\
\
# define transcendental_entries \
\
{ "sin", \
fntype(&sin_Sin_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "cos", \
fntype(&cos_Cos_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "tan", \
fntype(&tan_Tan_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "asinarcSin", \
fntype(&asin_ArcSin_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "acosarcCos", \
fntype(&acos_ArcCos_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "atanarcTan", \
fntype(&atan_ArcTan_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "atan2arcTan:", \
fntype(&atan2_ArcTan__glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "sinh", \
fntype(&sinh_Sinh_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "cosh", \
fntype(&cosh_Cosh_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "tanh", \
fntype(&tanh_Tanh_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "asinharcSinh", \
fntype(&asinh_ArcSinh_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "acosharcCosh", \
fntype(&acosh_ArcCosh_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "atanharcTanh", \
fntype(&atanh_ArcTanh_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "sqrtsquareRoot", \
fntype(&sqrt_SquareRoot_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "powraisedTo:", \
fntype(&pow_RaisedTo__glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "exp", \
fntype(&exp_Exp_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "lognaturalLog", \
fntype(&log_NaturalLog_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "log10base10Log", \
fntype(&log10_Base10Log_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \
{ "log2base2Log", \
fntype(&log2_Base2Log_glue), \
ExternalPrimitive, \
FloatPrimType, \
true, /* can fail               */ \
false, /* can scavenge           */ \
false, /* can be constant folded */ \
true, /* cannot be moved or cut */ \
false, /* can walk stack         */ \
false, /* can abort process      */ \
"Generated by the primitive maker" },\
 \


/* This information was generated by the primitive maker (primitiveMaker.self).
Please do not change it manually. -- dmu 12/91  */\
\
/* Copyright 1992-2012 AUTHORS.  */\
\
/* See the LICENSE file for license information.  */\
\
# define transcendental_glue    \
\
 C_func_1( float,, sin, sin_Sin_glue, , float,) \
 C_func_1( float,, cos, cos_Cos_glue, , float,) \
 C_func_1( float,, tan, tan_Tan_glue, , float,) \
 C_func_1( float,, asin, asin_ArcSin_glue, , float,) \
 C_func_1( float,, acos, acos_ArcCos_glue, , float,) \
 C_func_1( float,, atan, atan_ArcTan_glue, , float,) \
 C_func_2( float,, atan2, atan2_ArcTan__glue, , float,, float,) \
 C_func_1( float,, sinh, sinh_Sinh_glue, , float,) \
 C_func_1( float,, cosh, cosh_Cosh_glue, , float,) \
 C_func_1( float,, tanh, tanh_Tanh_glue, , float,) \
 C_func_1( float,, asinh, asinh_ArcSinh_glue, , float,) \
 C_func_1( float,, acosh, acosh_ArcCosh_glue, , float,) \
 C_func_1( float,, atanh, atanh_ArcTanh_glue, , float,) \
 C_func_1( float,, sqrt, sqrt_SquareRoot_glue, , float,) \
 C_func_2( float,, pow, pow_RaisedTo__glue, , float,, float,) \
 C_func_1( float,, exp, exp_Exp_glue, , float,) \
 C_func_1( float,, log, log_NaturalLog_glue, , float,) \
 C_func_1( float,, log10, log10_Base10Log_glue, , float,) \
 C_func_1( float,, log2, log2_Base2Log_glue, , float,) \


