// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#ifndef DJINNI_GENERATED_NJSUNIFIEDFRONTEND_HPP
#define DJINNI_GENERATED_NJSUNIFIEDFRONTEND_HPP


#include "balance_record.hpp"
#include "input_record.hpp"
#include "mutation_record.hpp"
#include "output_record.hpp"
#include "transaction_record.hpp"
#include <string>

#include <napi.h>
#include <uv.h>
#include <unified_frontend.hpp>

using namespace std;

class NJSUnifiedFrontend: public Napi::ObjectWrap<NJSUnifiedFrontend> {
public:

    static Napi::FunctionReference constructor;
    static Napi::Object Init(Napi::Env env, Napi::Object exports);
    NJSUnifiedFrontend(const Napi::CallbackInfo& info) : Napi::ObjectWrap<NJSUnifiedFrontend>(info){};

    /**
     * Fraction of work done since session start or last progress reset [0..1]
     * Unified progress combines connection state, header and block sync
     */
    void notifyUnifiedProgress(float progress);

    void notifyBalanceChange(const BalanceRecord & new_balance);

    /**
     * Notification of new mutations.
     * If self_committed it is due to a call to performPaymentToRecipient, else it is because of a transaction
     * reached us in another way. In general this will be because we received funds from someone, hower there are
     * also cases where funds is send from our wallet while !self_committed (for example by a linked desktop wallet
     * or another wallet instance using the same keys as ours).
     */
    void notifyNewMutation(const MutationRecord & mutation, bool self_committed);

    void notifyUpdatedTransaction(const TransactionRecord & transaction);

    void notifyInitWithExistingWallet();

    void notifyInitWithoutExistingWallet();

    void notifyShutdown();

    void notifyCoreReady();

    void logPrint(const std::string & str);

private:
    /**
     * Fraction of work done since session start or last progress reset [0..1]
     * Unified progress combines connection state, header and block sync
     */
    void notifyUnifiedProgress(const Napi::CallbackInfo& info);
    void notifyUnifiedProgress_aimpl__(float progress);

    void notifyBalanceChange(const Napi::CallbackInfo& info);
    void notifyBalanceChange_aimpl__(const BalanceRecord & new_balance);

    /**
     * Notification of new mutations.
     * If self_committed it is due to a call to performPaymentToRecipient, else it is because of a transaction
     * reached us in another way. In general this will be because we received funds from someone, hower there are
     * also cases where funds is send from our wallet while !self_committed (for example by a linked desktop wallet
     * or another wallet instance using the same keys as ours).
     */
    void notifyNewMutation(const Napi::CallbackInfo& info);
    void notifyNewMutation_aimpl__(const MutationRecord & mutation, bool self_committed);

    void notifyUpdatedTransaction(const Napi::CallbackInfo& info);
    void notifyUpdatedTransaction_aimpl__(const TransactionRecord & transaction);

    void notifyInitWithExistingWallet(const Napi::CallbackInfo& info);
    void notifyInitWithExistingWallet_aimpl__();

    void notifyInitWithoutExistingWallet(const Napi::CallbackInfo& info);
    void notifyInitWithoutExistingWallet_aimpl__();

    void notifyShutdown(const Napi::CallbackInfo& info);
    void notifyShutdown_aimpl__();

    void notifyCoreReady(const Napi::CallbackInfo& info);
    void notifyCoreReady_aimpl__();

    void logPrint(const Napi::CallbackInfo& info);
    void logPrint_aimpl__(const std::string & str);

};
#endif //DJINNI_GENERATED_NJSUNIFIEDFRONTEND_HPP