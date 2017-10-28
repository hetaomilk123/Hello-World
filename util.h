// util.h头文件
class StrVec{
public:
  StrVec &operator=(std::initializer_list <std::string>);
};

class StrBlobPtr{
public:
  std::string& operator*() const{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
  }
  std::string* operator->() const{
    return &this->operator*(); 
  }
};

