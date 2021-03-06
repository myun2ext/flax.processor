#ifndef __github_com_myun2__flax__processor__mul_HPP__
#define __github_com_myun2__flax__processor__mul_HPP__

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			template <typename LeftType, typename RightType>
			class mul
			{
			private:
				const LeftType& lvalue;
				const RightType& rvalue;
			public:
				mul(const LeftType& l, const RightType& r) : lvalue(l), rvalue(r) {}
				LeftType exec() const { return lvalue * rvalue; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__mul_HPP__
