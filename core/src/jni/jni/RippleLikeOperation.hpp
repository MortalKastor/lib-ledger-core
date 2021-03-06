// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#ifndef DJINNI_GENERATED_RIPPLELIKEOPERATION_HPP_JNI_
#define DJINNI_GENERATED_RIPPLELIKEOPERATION_HPP_JNI_

#include "../../api/RippleLikeOperation.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class RippleLikeOperation final : ::djinni::JniInterface<::ledger::core::api::RippleLikeOperation, RippleLikeOperation> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::RippleLikeOperation>;
    using CppOptType = std::shared_ptr<::ledger::core::api::RippleLikeOperation>;
    using JniType = jobject;

    using Boxed = RippleLikeOperation;

    ~RippleLikeOperation();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<RippleLikeOperation>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<RippleLikeOperation>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    RippleLikeOperation();
    friend ::djinni::JniClass<RippleLikeOperation>;
    friend ::djinni::JniInterface<::ledger::core::api::RippleLikeOperation, RippleLikeOperation>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_RIPPLELIKEOPERATION_HPP_JNI_
