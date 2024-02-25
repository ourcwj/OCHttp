#include "OCUrlDef.h"
#include "pch.h"

#include "OCUrl.h"

using namespace OCHttp::OCUrl;

Url::Url(IN char url[])
{
	urlObject = new OCHttpDef::OCUrl::OUrlObject;
}

Url::~Url()
{
	delete urlObject;
}


// 数据获取接口实现

int Url::getUrl(char* url[])
{
	*url = urlObject->url;
	return 0;
}

int Url::getPort()
{
	return urlObject->port;
}

int Url::getInternetPortocol()
{
	return urlObject->internetPortocol;
}

int Url::getHostName(OUT char* hostName[])
{
	*hostName = urlObject->hostName;
	return 0;
}

int Url::getUserName(OUT char* userName[])
{
	*userName = urlObject->userName;
	return 0;
}

int Url::getPassword(OUT char* password[])
{
	*password = urlObject->Password;
	return 0;
}

int Url::getUrlPath(OUT char* urlPath[])
{
	*urlPath = urlObject->urlPath;
	return 0;
}

int Url::getExtrInfo(OUT char* extrInfo[])
{
	*extrInfo = urlObject->ExtrInfo;
	return 0;
}


// 数据更改实现

int Url::setUrl(IN char url[1500])
{
	strcpy_s(urlObject->url, url);
	return 0;
}

int Url::setPort(IN int port)
{
	urlObject->port = port;
	return 0;
}

int Url::setInternetPortocol(IN int portocol)
{
	urlObject->internetPortocol = portocol;
	return 0;
}

int Url::setHostName(IN char hostName[100])
{
	strcpy_s(urlObject->hostName, hostName);
	return 0;
}

int Url::setUserName(IN char userName[100])
{
	strcpy_s(urlObject->userName, userName);
	return 0;
}

int Url::setPassword(IN char password[200])
{
	strcpy_s(urlObject->Password, password);
	return 0;
}

int Url::setUrlPath(IN char urlPath[500])
{
	strcpy_s(urlObject->urlPath, urlPath);
	return 0;
}

int Url::setExtrInfo(IN char ExtrInfo[500])
{
	strcpy_s(urlObject->ExtrInfo, ExtrInfo);
	return 0;
}
