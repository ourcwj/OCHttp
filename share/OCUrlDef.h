#pragma once

#define IN
#define OUT
#define OCAPI

#define INTERNET_PORTOCOL_HTTP	0x00000001	// Http协议
#define INTERNET_PORTOCOL_HTTPS 0x00000002	// Https协议

namespace OCHttp {

	namespace OCUrl {

		typedef struct OUrlObject
		{
			char url[1500];
			short int port;
			short int internetPortocol;
			char hostName[100];
			char userName[100];
			char Password[200];
			char urlPath[500];
			char ExtrInfo[500];
		};

		/* 用于定义接口的基类 */
		OCAPI
		class OCURLBASE
		{
		public:
			// 定义用于获取数据的API
			virtual int getUrl(OUT char*[])			= 0;
			virtual int getPort()					= 0;
			virtual int getInternetPortocol()		= 0;
			virtual int getHostName(OUT char* [])	= 0;
			virtual int getUserName(OUT char* [])	= 0;
			virtual int getPassword(OUT char* [])	= 0;
			virtual int getUrlPath(OUT char* [])	= 0;
			virtual int getExtrInfo(OUT char* [])	= 0;

			// 定义用于更改数据的API
			virtual int setUrl(IN char[1500])					= 0;
			virtual int setPort(IN int port)					= 0;
			virtual int setInternetPortocol(IN int portocol)	= 0;
			virtual int setHostName(IN char[100])				= 0;
			virtual int setUserName(IN char[100])				= 0;
			virtual int setPassword(IN char[200])				= 0;
			virtual int setUrlPath(IN char[500])				= 0;
			virtual int setExtrInfo(IN char[500])				= 0;

		protected:
			OUrlObject* urlObject;
		};
	}
}