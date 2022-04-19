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
		std::string machineMac;
	};
	class CC_DECLARE_EXPORT IServiceCallBack
	{
	public:
		IServiceCallBack() {};
		~IServiceCallBack() {};
		virtual void onDiscoverMachine(std::vector<machine_info> machineInfos) =0;
	 };

	CC_DECLARE_EXPORT void  discoveryService(const std::string& prefix, IServiceCallBack* callback=nullptr);
	CC_DECLARE_EXPORT std::vector<machine_info> syncDiscoveryService(std::string& prefix);
}
#endif