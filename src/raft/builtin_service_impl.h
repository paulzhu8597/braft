// Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved

// Author: Zhangyi Chen (chenzhangyi01@baidu.com)
// Date: 2015/11/18 23:28:18

#ifndef  PUBLIC_RAFT_BUILTIN_SERVICE_IMPL_H
#define  PUBLIC_RAFT_BUILTIN_SERVICE_IMPL_H

#include "raft/builtin_service.pb.h"

namespace raft {

class RaftStatImpl : public raft_stat {
public:
    void default_method(::google::protobuf::RpcController* controller,
                        const ::raft::IndexRequest* request,
                        ::raft::IndexResponse* response,
                        ::google::protobuf::Closure* done);
};

}  // namespace raft

#endif  //PUBLIC_RAFT_BUILTIN_SERVICE_IMPL_H
