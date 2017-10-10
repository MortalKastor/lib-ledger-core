// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "ExtendedKeyAccountCreationInfoCallback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol LGExtendedKeyAccountCreationInfoCallback;

namespace djinni_generated {

class ExtendedKeyAccountCreationInfoCallback
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::ExtendedKeyAccountCreationInfoCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::ExtendedKeyAccountCreationInfoCallback>;
    using ObjcType = id<LGExtendedKeyAccountCreationInfoCallback>;

    using Boxed = ExtendedKeyAccountCreationInfoCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
