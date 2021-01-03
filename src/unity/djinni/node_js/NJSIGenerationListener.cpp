// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NJSIGenerationListener.hpp"
using namespace std;

void NJSIGenerationListener::onGenerationStarted_aimpl__()
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    Napi::Value calling_function_as_value = Value().Get("onGenerationStarted");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onGenerationStarted = calling_function.Call(args);
        if(result_onGenerationStarted.IsEmpty())
        {
            Napi::Error::New(env, "NJSIGenerationListener::onGenerationStarted call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSIGenerationListener::onGenerationStarted()
{
    uv_work_t* request = new uv_work_t;
    request->data = new std::tuple<NJSIGenerationListener*>(this);

    uv_queue_work(uv_default_loop(), request, [](uv_work_t*) -> void{}, [](uv_work_t* req, int status) -> void
    {
        NJSIGenerationListener* pthis = std::get<0>(*((std::tuple<NJSIGenerationListener*>*)req->data));
        pthis->onGenerationStarted_aimpl__();
        delete (std::tuple<NJSIGenerationListener*>*)req->data;
        req->data = nullptr;
    }
    );
}

void NJSIGenerationListener::onGenerationStopped_aimpl__()
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    Napi::Value calling_function_as_value = Value().Get("onGenerationStopped");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onGenerationStopped = calling_function.Call(args);
        if(result_onGenerationStopped.IsEmpty())
        {
            Napi::Error::New(env, "NJSIGenerationListener::onGenerationStopped call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSIGenerationListener::onGenerationStopped()
{
    uv_work_t* request = new uv_work_t;
    request->data = new std::tuple<NJSIGenerationListener*>(this);

    uv_queue_work(uv_default_loop(), request, [](uv_work_t*) -> void{}, [](uv_work_t* req, int status) -> void
    {
        NJSIGenerationListener* pthis = std::get<0>(*((std::tuple<NJSIGenerationListener*>*)req->data));
        pthis->onGenerationStopped_aimpl__();
        delete (std::tuple<NJSIGenerationListener*>*)req->data;
        req->data = nullptr;
    }
    );
}

void NJSIGenerationListener::onStatsUpdated_aimpl__(double hashesPerSecond, const std::string & hashesPerSecondUnit, double rollingHashesPerSecond, const std::string & rollingHashesPerSecondUnit, double bestHashesPerSecond, const std::string & bestHashesPerSecondUnit, double arenaSetupTime)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::Value::From(env, hashesPerSecond);
    args.push_back(arg_0);
    auto arg_1 = Napi::String::New(env, hashesPerSecondUnit);
    args.push_back(arg_1);
    auto arg_2 = Napi::Value::From(env, rollingHashesPerSecond);
    args.push_back(arg_2);
    auto arg_3 = Napi::String::New(env, rollingHashesPerSecondUnit);
    args.push_back(arg_3);
    auto arg_4 = Napi::Value::From(env, bestHashesPerSecond);
    args.push_back(arg_4);
    auto arg_5 = Napi::String::New(env, bestHashesPerSecondUnit);
    args.push_back(arg_5);
    auto arg_6 = Napi::Value::From(env, arenaSetupTime);
    args.push_back(arg_6);
    Napi::Value calling_function_as_value = Value().Get("onStatsUpdated");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onStatsUpdated = calling_function.Call(args);
        if(result_onStatsUpdated.IsEmpty())
        {
            Napi::Error::New(env, "NJSIGenerationListener::onStatsUpdated call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSIGenerationListener::onStatsUpdated(double hashesPerSecond, const std::string & hashesPerSecondUnit, double rollingHashesPerSecond, const std::string & rollingHashesPerSecondUnit, double bestHashesPerSecond, const std::string & bestHashesPerSecondUnit, double arenaSetupTime)
{
    uv_work_t* request = new uv_work_t;
    request->data = new std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>(this, hashesPerSecond, hashesPerSecondUnit, rollingHashesPerSecond, rollingHashesPerSecondUnit, bestHashesPerSecond, bestHashesPerSecondUnit, arenaSetupTime);

    uv_queue_work(uv_default_loop(), request, [](uv_work_t*) -> void{}, [](uv_work_t* req, int status) -> void
    {
        NJSIGenerationListener* pthis = std::get<0>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data));
        pthis->onStatsUpdated_aimpl__(std::get<1>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)), std::get<2>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)), std::get<3>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)), std::get<4>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)), std::get<5>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)), std::get<6>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)), std::get<7>(*((std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data)));
        delete (std::tuple<NJSIGenerationListener*, double, std::string, double, std::string, double, std::string, double>*)req->data;
        req->data = nullptr;
    }
    );
}

Napi::FunctionReference NJSIGenerationListener::constructor;

Napi::Object NJSIGenerationListener::Init(Napi::Env env, Napi::Object exports) {

    Napi::Function func = DefineClass(env, "NJSIGenerationListener",{});
    constructor = Napi::Persistent(func);
    constructor.SuppressDestruct();
    exports.Set("NJSIGenerationListener", func);
    return exports;
}