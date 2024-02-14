#pragma once
#include "OCUrlDef.h"

dllExport class OCUrl: public OCHttp::OCUrl::OCURLBASE
{
public:
	OCUrl();
	~OCUrl();

	// 获取数据
	int getUrl(char* ch[]);
	int getPort();
	int getInternetPortocol();
	int getHostName(char* ch[]);
	int getUserName(char* ch[]);
	int getPassword(char* ch[]);
	int getUrlPath(char* ch[]);
	int getExtrInfo(char* []);

	// 更改数据
	int setUrl(char[1500]);
	int setPort(int port);
	int setInternetPortocol(int portocol);
	int setHostName(char[100]);
	int setUserName(char[100]);
	int setPassword(char[200]);
	int setUrlPath(char[500]);
	int setExtrInfo(char[500]);

	// 更新数据
	int crackUrl();
	int createUrl();

};

