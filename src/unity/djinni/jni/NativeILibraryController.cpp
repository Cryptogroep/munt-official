// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NativeILibraryController.hpp"  // my header
#include "Marshal.hpp"
#include "NativeAddressRecord.hpp"
#include "NativeBlockInfoRecord.hpp"
#include "NativeILibraryListener.hpp"
#include "NativeLegacyWalletResult.hpp"
#include "NativeMonitorListener.hpp"
#include "NativeMonitorRecord.hpp"
#include "NativeMutationRecord.hpp"
#include "NativePaymentResultStatus.hpp"
#include "NativeQrCodeRecord.hpp"
#include "NativeTransactionRecord.hpp"
#include "NativeUriRecipient.hpp"
#include "NativeUriRecord.hpp"

namespace djinni_generated {

NativeILibraryController::NativeILibraryController() : ::djinni::JniInterface<::ILibraryController, NativeILibraryController>("com/gulden/jniunifiedbackend/ILibraryController$CppProxy") {}

NativeILibraryController::~NativeILibraryController() = default;


CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ILibraryController>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_BuildInfo(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::BuildInfo();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_InitUnityLib(JNIEnv* jniEnv, jobject /*this*/, jstring j_dataDir, jstring j_staticFilterPath, jlong j_staticFilterOffset, jlong j_staticFilterLength, jboolean j_testnet, jboolean j_spvMode, jobject j_signalHandler, jstring j_extraArgs)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::InitUnityLib(::djinni::String::toCpp(jniEnv, j_dataDir),
                                                    ::djinni::String::toCpp(jniEnv, j_staticFilterPath),
                                                    ::djinni::I64::toCpp(jniEnv, j_staticFilterOffset),
                                                    ::djinni::I64::toCpp(jniEnv, j_staticFilterLength),
                                                    ::djinni::Bool::toCpp(jniEnv, j_testnet),
                                                    ::djinni::Bool::toCpp(jniEnv, j_spvMode),
                                                    ::djinni_generated::NativeILibraryListener::toCpp(jniEnv, j_signalHandler),
                                                    ::djinni::String::toCpp(jniEnv, j_extraArgs));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_InitUnityLibThreaded(JNIEnv* jniEnv, jobject /*this*/, jstring j_dataDir, jstring j_staticFilterPath, jlong j_staticFilterOffset, jlong j_staticFilterLength, jboolean j_testnet, jboolean j_spvMode, jobject j_signalHandler, jstring j_extraArgs)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::InitUnityLibThreaded(::djinni::String::toCpp(jniEnv, j_dataDir),
                                                   ::djinni::String::toCpp(jniEnv, j_staticFilterPath),
                                                   ::djinni::I64::toCpp(jniEnv, j_staticFilterOffset),
                                                   ::djinni::I64::toCpp(jniEnv, j_staticFilterLength),
                                                   ::djinni::Bool::toCpp(jniEnv, j_testnet),
                                                   ::djinni::Bool::toCpp(jniEnv, j_spvMode),
                                                   ::djinni_generated::NativeILibraryListener::toCpp(jniEnv, j_signalHandler),
                                                   ::djinni::String::toCpp(jniEnv, j_extraArgs));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_InitWalletFromRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase, jstring j_password)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::InitWalletFromRecoveryPhrase(::djinni::String::toCpp(jniEnv, j_phrase),
                                                                    ::djinni::String::toCpp(jniEnv, j_password));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_ContinueWalletFromRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase, jstring j_password)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::ContinueWalletFromRecoveryPhrase(::djinni::String::toCpp(jniEnv, j_phrase),
                                                                        ::djinni::String::toCpp(jniEnv, j_password));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_InitWalletLinkedFromURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_linkedUri, jstring j_password)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::InitWalletLinkedFromURI(::djinni::String::toCpp(jniEnv, j_linkedUri),
                                                               ::djinni::String::toCpp(jniEnv, j_password));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_ContinueWalletLinkedFromURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_linkedUri, jstring j_password)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::ContinueWalletLinkedFromURI(::djinni::String::toCpp(jniEnv, j_linkedUri),
                                                                   ::djinni::String::toCpp(jniEnv, j_password));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_InitWalletFromAndroidLegacyProtoWallet(JNIEnv* jniEnv, jobject /*this*/, jstring j_walletFile, jstring j_oldPassword, jstring j_newPassword)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::InitWalletFromAndroidLegacyProtoWallet(::djinni::String::toCpp(jniEnv, j_walletFile),
                                                                              ::djinni::String::toCpp(jniEnv, j_oldPassword),
                                                                              ::djinni::String::toCpp(jniEnv, j_newPassword));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_isValidAndroidLegacyProtoWallet(JNIEnv* jniEnv, jobject /*this*/, jstring j_walletFile, jstring j_oldPassword)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::isValidAndroidLegacyProtoWallet(::djinni::String::toCpp(jniEnv, j_walletFile),
                                                                       ::djinni::String::toCpp(jniEnv, j_oldPassword));
        return ::djinni::release(::djinni_generated::NativeLegacyWalletResult::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsValidLinkURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsValidLinkURI(::djinni::String::toCpp(jniEnv, j_phrase));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_ReplaceWalletLinkedFromURI(JNIEnv* jniEnv, jobject /*this*/, jstring j_linkedUri, jstring j_password)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::ReplaceWalletLinkedFromURI(::djinni::String::toCpp(jniEnv, j_linkedUri),
                                                                  ::djinni::String::toCpp(jniEnv, j_password));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_EraseWalletSeedsAndAccounts(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::EraseWalletSeedsAndAccounts();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsValidRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsValidRecoveryPhrase(::djinni::String::toCpp(jniEnv, j_phrase));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_GenerateRecoveryMnemonic(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::GenerateRecoveryMnemonic();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_GenerateGenesisKeys(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::GenerateGenesisKeys();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_ComposeRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/, jstring j_mnemonic, jlong j_birthTime)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::ComposeRecoveryPhrase(::djinni::String::toCpp(jniEnv, j_mnemonic),
                                                             ::djinni::I64::toCpp(jniEnv, j_birthTime));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_TerminateUnityLib(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::TerminateUnityLib();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_QRImageFromString(JNIEnv* jniEnv, jobject /*this*/, jstring j_qrString, jint j_widthHint)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::QRImageFromString(::djinni::String::toCpp(jniEnv, j_qrString),
                                                         ::djinni::I32::toCpp(jniEnv, j_widthHint));
        return ::djinni::release(::djinni_generated::NativeQrCodeRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_GetReceiveAddress(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::GetReceiveAddress();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_GetRecoveryPhrase(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::GetRecoveryPhrase();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsMnemonicWallet(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsMnemonicWallet();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsMnemonicCorrect(JNIEnv* jniEnv, jobject /*this*/, jstring j_phrase)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsMnemonicCorrect(::djinni::String::toCpp(jniEnv, j_phrase));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_GetMnemonicDictionary(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::GetMnemonicDictionary();
        return ::djinni::release(::djinni::List<::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_UnlockWallet(JNIEnv* jniEnv, jobject /*this*/, jstring j_password)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::UnlockWallet(::djinni::String::toCpp(jniEnv, j_password));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_LockWallet(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::LockWallet();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_ChangePassword(JNIEnv* jniEnv, jobject /*this*/, jstring j_oldPassword, jstring j_newPassword)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::ChangePassword(::djinni::String::toCpp(jniEnv, j_oldPassword),
                                                      ::djinni::String::toCpp(jniEnv, j_newPassword));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_DoRescan(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::DoRescan();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsValidRecipient(JNIEnv* jniEnv, jobject /*this*/, jobject j_request)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsValidRecipient(::djinni_generated::NativeUriRecord::toCpp(jniEnv, j_request));
        return ::djinni::release(::djinni_generated::NativeUriRecipient::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsValidNativeAddress(JNIEnv* jniEnv, jobject /*this*/, jstring j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsValidNativeAddress(::djinni::String::toCpp(jniEnv, j_address));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_IsValidBitcoinAddress(JNIEnv* jniEnv, jobject /*this*/, jstring j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::IsValidBitcoinAddress(::djinni::String::toCpp(jniEnv, j_address));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_feeForRecipient(JNIEnv* jniEnv, jobject /*this*/, jobject j_request)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::feeForRecipient(::djinni_generated::NativeUriRecipient::toCpp(jniEnv, j_request));
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_performPaymentToRecipient(JNIEnv* jniEnv, jobject /*this*/, jobject j_request, jboolean j_substractFee)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::performPaymentToRecipient(::djinni_generated::NativeUriRecipient::toCpp(jniEnv, j_request),
                                                                 ::djinni::Bool::toCpp(jniEnv, j_substractFee));
        return ::djinni::release(::djinni_generated::NativePaymentResultStatus::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getTransaction(JNIEnv* jniEnv, jobject /*this*/, jstring j_txHash)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getTransaction(::djinni::String::toCpp(jniEnv, j_txHash));
        return ::djinni::release(::djinni_generated::NativeTransactionRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_resendTransaction(JNIEnv* jniEnv, jobject /*this*/, jstring j_txHash)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::resendTransaction(::djinni::String::toCpp(jniEnv, j_txHash));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getAddressBookRecords(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getAddressBookRecords();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeAddressRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_addAddressBookRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::addAddressBookRecord(::djinni_generated::NativeAddressRecord::toCpp(jniEnv, j_address));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_deleteAddressBookRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_address)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::deleteAddressBookRecord(::djinni_generated::NativeAddressRecord::toCpp(jniEnv, j_address));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_PersistAndPruneForSPV(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::PersistAndPruneForSPV();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_ResetUnifiedProgress(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::ResetUnifiedProgress();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getLastSPVBlockInfos(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getLastSPVBlockInfos();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeBlockInfoRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getUnifiedProgress(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getUnifiedProgress();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getMonitoringStats(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getMonitoringStats();
        return ::djinni::release(::djinni_generated::NativeMonitorRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_RegisterMonitorListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::RegisterMonitorListener(::djinni_generated::NativeMonitorListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_UnregisterMonitorListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::ILibraryController::UnregisterMonitorListener(::djinni_generated::NativeMonitorListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getClientInfo(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getClientInfo();
        return ::djinni::release(::djinni::Map<::djinni::String, ::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getMutationHistory(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getMutationHistory();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeMutationRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_getTransactionHistory(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::getTransactionHistory();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeTransactionRecord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_HaveUnconfirmedFunds(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::HaveUnconfirmedFunds();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL Java_com_gulden_jniunifiedbackend_ILibraryController_00024CppProxy_GetBalance(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ILibraryController::GetBalance();
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated