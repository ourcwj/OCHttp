#pragma once
#include"pch.h"

namespace OCHttp {

	namespace OCUrl {

		class Url :public OCHttp::OCUrl::OCURLBASE {

			Url(IN char url[]);
			~Url();

			// 实现用于获取数据的API
			int getUrl(char* []);
			int getPort();
			int getInternetPortocol();
			int getHostName(OUT char* []);
			int getUserName(OUT char* []);
			int getPassword(OUT char* []);
			int getUrlPath(OUT char* []);
			int getExtrInfo(OUT char* []);

			// 实现用于更改数据的API
			int setUrl(IN char[1500]);
			int setPort(IN int port);
			int setInternetPortocol(IN int portocol);
			int setHostName(IN char[100]);
			int setUserName(IN char[100]);
			int setPassword(IN char[200]);
			int setUrlPath(IN char[500]);
			int setExtrInfo(IN char[500]);
		};
	}

}