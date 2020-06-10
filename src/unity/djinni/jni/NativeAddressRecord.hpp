// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#pragma once

#include "address_record.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeAddressRecord final {
public:
    using CppType = ::AddressRecord;
    using JniType = jobject;

    using Boxed = NativeAddressRecord;

    ~NativeAddressRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeAddressRecord();
    friend ::djinni::JniClass<NativeAddressRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/gulden/jniunifiedbackend/AddressRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V") };
    const jfieldID field_mAddress { ::djinni::jniGetFieldID(clazz.get(), "mAddress", "Ljava/lang/String;") };
    const jfieldID field_mName { ::djinni::jniGetFieldID(clazz.get(), "mName", "Ljava/lang/String;") };
    const jfieldID field_mDesc { ::djinni::jniGetFieldID(clazz.get(), "mDesc", "Ljava/lang/String;") };
    const jfieldID field_mPurpose { ::djinni::jniGetFieldID(clazz.get(), "mPurpose", "Ljava/lang/String;") };
};

}  // namespace djinni_generated