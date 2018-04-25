// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "Account.hpp"  // my header
#include "AmountCallback.hpp"
#include "BitcoinLikeAccount.hpp"
#include "BlockCallback.hpp"
#include "EventBus.hpp"
#include "Logger.hpp"
#include "Marshal.hpp"
#include "OperationQuery.hpp"
#include "Preferences.hpp"
#include "StringListCallback.hpp"
#include "WalletType.hpp"

namespace djinni_generated {

Account::Account() : ::djinni::JniInterface<::ledger::core::api::Account, Account>("co/ledger/core/Account$CppProxy") {}

Account::~Account() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_Account_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::Account>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getIndex(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->getIndex();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1queryOperations(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->queryOperations();
        return ::djinni::release(::djinni_generated::OperationQuery::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getBalance(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        ref->getBalance(::djinni_generated::AmountCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1isSynchronizing(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->isSynchronizing();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1synchronize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->synchronize();
        return ::djinni::release(::djinni_generated::EventBus::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getPreferences(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->getPreferences();
        return ::djinni::release(::djinni_generated::Preferences::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getLogger(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->getLogger();
        return ::djinni::release(::djinni_generated::Logger::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getOperationPreferences(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_uid)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->getOperationPreferences(::djinni::String::toCpp(jniEnv, j_uid));
        return ::djinni::release(::djinni_generated::Preferences::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1asBitcoinLikeAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->asBitcoinLikeAccount();
        return ::djinni::release(::djinni_generated::BitcoinLikeAccount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1isInstanceOfBitcoinLikeAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->isInstanceOfBitcoinLikeAccount();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1isInstanceOfEthereumLikeAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->isInstanceOfEthereumLikeAccount();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1isInstanceOfRippleLikeAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->isInstanceOfRippleLikeAccount();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getFreshPublicAddresses(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        ref->getFreshPublicAddresses(::djinni_generated::StringListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getWalletType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->getWalletType();
        return ::djinni::release(::djinni_generated::WalletType::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getEventBus(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->getEventBus();
        return ::djinni::release(::djinni_generated::EventBus::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1startBlockchainObservation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        ref->startBlockchainObservation();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1stopBlockchainObservation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        ref->stopBlockchainObservation();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1isObservingBlockchain(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->isObservingBlockchain();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1getLastBlock(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        ref->getLastBlock(::djinni_generated::BlockCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_Account_00024CppProxy_native_1asBitcoinLikeAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::Account>(nativeRef);
        auto r = ref->asBitcoinLikeAccount();
        return ::djinni::release(::djinni_generated::BitcoinLikeAccount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
