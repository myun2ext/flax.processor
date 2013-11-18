#ifndef __github_com_myun2__flax__processor__string__chr_HPP__
#define __github_com_myun2__flax__processor__string__chr_HPP__

#include <string.h>

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			class chr_
			{
			public:
				int exec(const char* s, int pos) const {
					return s[pos];
				}
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__string__chr_HPP__
