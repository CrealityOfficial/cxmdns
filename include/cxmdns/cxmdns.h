#ifndef _CX_MDNS_H
#define _CX_MDNS_H
#include"ccglobal/export.h"
#include<string>
#include<vector>

namespace cxnet
{
	struct machine_info
	{
		std::string machineIp;
		std::string answer;
	};

	CC_DECLARE_EXPORT std::vector<machine_info> syncDiscoveryService(const std::vector<std::string>& prefix);
}
#endif