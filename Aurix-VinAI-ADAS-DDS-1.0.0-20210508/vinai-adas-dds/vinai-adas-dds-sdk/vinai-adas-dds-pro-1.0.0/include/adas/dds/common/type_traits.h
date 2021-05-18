/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_type_traits
#define H_type_traits

template<typename T> struct TypeTraits;

#define DEFINE_TYPE_TRAIT(T_) \
template<>\
struct TypeTraits<T_>\
{\
    typedef T_##PubSubType TypeSupport;\
};

#endif // H_type_traits
