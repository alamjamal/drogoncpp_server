#pragma once
#include <drogon/HttpSimpleController.h>
using namespace drogon;
class ListController:public drogon::HttpSimpleController<ListController>{
  public:
    virtual void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    PATH_ADD("/",Get,Post);
    PATH_ADD("/list",Get);
    PATH_LIST_END
};