// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: pb/chat/chat.proto
#ifndef GRPC_pb_2fchat_2fchat_2eproto__INCLUDED
#define GRPC_pb_2fchat_2fchat_2eproto__INCLUDED

#include "pb/chat/chat.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace chat {

class Chat final {
 public:
  static constexpr char const* service_full_name() {
    return "chat.Chat";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Join(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::chat::Receipt* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>> AsyncJoin(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>>(AsyncJoinRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>> PrepareAsyncJoin(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>>(PrepareAsyncJoinRaw(context, request, cq));
    }
    virtual ::grpc::Status Send(::grpc::ClientContext* context, const ::chat::Payload& request, ::chat::Receipt* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>> AsyncSend(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>>(AsyncSendRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>> PrepareAsyncSend(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>>(PrepareAsyncSendRaw(context, request, cq));
    }
    virtual ::grpc::Status Poll(::grpc::ClientContext* context, const ::chat::PollReq& request, ::chat::PollUpdate* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::PollUpdate>> AsyncPoll(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::PollUpdate>>(AsyncPollRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::PollUpdate>> PrepareAsyncPoll(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::PollUpdate>>(PrepareAsyncPollRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Join(::grpc::ClientContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Join(::grpc::ClientContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Join(::grpc::ClientContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void Send(::grpc::ClientContext* context, const ::chat::Payload* request, ::chat::Receipt* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Send(::grpc::ClientContext* context, const ::chat::Payload* request, ::chat::Receipt* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Send(::grpc::ClientContext* context, const ::chat::Payload* request, ::chat::Receipt* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void Poll(::grpc::ClientContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Poll(::grpc::ClientContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Poll(::grpc::ClientContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>* AsyncJoinRaw(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>* PrepareAsyncJoinRaw(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>* AsyncSendRaw(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::Receipt>* PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::PollUpdate>* AsyncPollRaw(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::PollUpdate>* PrepareAsyncPollRaw(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Join(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::chat::Receipt* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>> AsyncJoin(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>>(AsyncJoinRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>> PrepareAsyncJoin(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>>(PrepareAsyncJoinRaw(context, request, cq));
    }
    ::grpc::Status Send(::grpc::ClientContext* context, const ::chat::Payload& request, ::chat::Receipt* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>> AsyncSend(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>>(AsyncSendRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>> PrepareAsyncSend(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Receipt>>(PrepareAsyncSendRaw(context, request, cq));
    }
    ::grpc::Status Poll(::grpc::ClientContext* context, const ::chat::PollReq& request, ::chat::PollUpdate* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::PollUpdate>> AsyncPoll(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::PollUpdate>>(AsyncPollRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::PollUpdate>> PrepareAsyncPoll(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::PollUpdate>>(PrepareAsyncPollRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Join(::grpc::ClientContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Join(::grpc::ClientContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Join(::grpc::ClientContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void Send(::grpc::ClientContext* context, const ::chat::Payload* request, ::chat::Receipt* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Send(::grpc::ClientContext* context, const ::chat::Payload* request, ::chat::Receipt* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Send(::grpc::ClientContext* context, const ::chat::Payload* request, ::chat::Receipt* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void Poll(::grpc::ClientContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Poll(::grpc::ClientContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Poll(::grpc::ClientContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::chat::Receipt>* AsyncJoinRaw(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::Receipt>* PrepareAsyncJoinRaw(::grpc::ClientContext* context, const ::chat::JoinReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::Receipt>* AsyncSendRaw(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::Receipt>* PrepareAsyncSendRaw(::grpc::ClientContext* context, const ::chat::Payload& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::PollUpdate>* AsyncPollRaw(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::PollUpdate>* PrepareAsyncPollRaw(::grpc::ClientContext* context, const ::chat::PollReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Join_;
    const ::grpc::internal::RpcMethod rpcmethod_Send_;
    const ::grpc::internal::RpcMethod rpcmethod_Poll_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Join(::grpc::ServerContext* context, const ::chat::JoinReq* request, ::chat::Receipt* response);
    virtual ::grpc::Status Send(::grpc::ServerContext* context, const ::chat::Payload* request, ::chat::Receipt* response);
    virtual ::grpc::Status Poll(::grpc::ServerContext* context, const ::chat::PollReq* request, ::chat::PollUpdate* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Join() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestJoin(::grpc::ServerContext* context, ::chat::JoinReq* request, ::grpc::ServerAsyncResponseWriter< ::chat::Receipt>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Send() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSend(::grpc::ServerContext* context, ::chat::Payload* request, ::grpc::ServerAsyncResponseWriter< ::chat::Receipt>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Poll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Poll() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Poll() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Poll(::grpc::ServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPoll(::grpc::ServerContext* context, ::chat::PollReq* request, ::grpc::ServerAsyncResponseWriter< ::chat::PollUpdate>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Join<WithAsyncMethod_Send<WithAsyncMethod_Poll<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Join() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::chat::JoinReq, ::chat::Receipt>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::chat::JoinReq* request, ::chat::Receipt* response) { return this->Join(context, request, response); }));}
    void SetMessageAllocatorFor_Join(
        ::grpc::experimental::MessageAllocator< ::chat::JoinReq, ::chat::Receipt>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::chat::JoinReq, ::chat::Receipt>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Join(
      ::grpc::CallbackServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Join(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Send() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::chat::Payload, ::chat::Receipt>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::chat::Payload* request, ::chat::Receipt* response) { return this->Send(context, request, response); }));}
    void SetMessageAllocatorFor_Send(
        ::grpc::experimental::MessageAllocator< ::chat::Payload, ::chat::Receipt>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::chat::Payload, ::chat::Receipt>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Send(
      ::grpc::CallbackServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Send(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Poll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Poll() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::chat::PollReq, ::chat::PollUpdate>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::chat::PollReq* request, ::chat::PollUpdate* response) { return this->Poll(context, request, response); }));}
    void SetMessageAllocatorFor_Poll(
        ::grpc::experimental::MessageAllocator< ::chat::PollReq, ::chat::PollUpdate>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(2);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::chat::PollReq, ::chat::PollUpdate>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Poll() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Poll(::grpc::ServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Poll(
      ::grpc::CallbackServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Poll(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Join<ExperimentalWithCallbackMethod_Send<ExperimentalWithCallbackMethod_Poll<Service > > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Join<ExperimentalWithCallbackMethod_Send<ExperimentalWithCallbackMethod_Poll<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Join() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Send() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Poll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Poll() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Poll() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Poll(::grpc::ServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Join() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestJoin(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Send() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSend(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Poll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Poll() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Poll() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Poll(::grpc::ServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPoll(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Join() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Join(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Join(::grpc::ServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Join(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Join(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Send() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Send(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Send(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Send(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Poll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Poll() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Poll(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Poll() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Poll(::grpc::ServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Poll(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Poll(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Join : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Join() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::chat::JoinReq, ::chat::Receipt>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::chat::JoinReq, ::chat::Receipt>* streamer) {
                       return this->StreamedJoin(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Join() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Join(::grpc::ServerContext* /*context*/, const ::chat::JoinReq* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedJoin(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::chat::JoinReq,::chat::Receipt>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Send() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::chat::Payload, ::chat::Receipt>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::chat::Payload, ::chat::Receipt>* streamer) {
                       return this->StreamedSend(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Send(::grpc::ServerContext* /*context*/, const ::chat::Payload* /*request*/, ::chat::Receipt* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSend(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::chat::Payload,::chat::Receipt>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Poll : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Poll() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::chat::PollReq, ::chat::PollUpdate>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::chat::PollReq, ::chat::PollUpdate>* streamer) {
                       return this->StreamedPoll(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Poll() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Poll(::grpc::ServerContext* /*context*/, const ::chat::PollReq* /*request*/, ::chat::PollUpdate* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPoll(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::chat::PollReq,::chat::PollUpdate>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Join<WithStreamedUnaryMethod_Send<WithStreamedUnaryMethod_Poll<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Join<WithStreamedUnaryMethod_Send<WithStreamedUnaryMethod_Poll<Service > > > StreamedService;
};

}  // namespace chat


#endif  // GRPC_pb_2fchat_2fchat_2eproto__INCLUDED
