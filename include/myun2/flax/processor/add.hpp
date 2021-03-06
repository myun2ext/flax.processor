#ifndef __github_com_myun2__flax__processor__addition_HPP__
#define __github_com_myun2__flax__processor__addition_HPP__

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			template <typename LeftType, typename RightType>
			class add
			{
			private:
				const LeftType& lvalue;
				const RightType& rvalue;
			public:
				add(const LeftType& l, const RightType& r) : lvalue(l), rvalue(r) {}
				LeftType exec() const { return lvalue + rvalue; }
			};

			template <typename LeftType, typename RightType>
			class adder
			{
			private:
				LeftType& lvalue;
				const RightType& rvalue;
			public:
				adder(const LeftType& l, const RightType& r) : lvalue(l), rvalue(r) {}
				LeftType exec() const { return lvalue += rvalue; }
			};

			template <typename LeftType, typename RightType>
			class constant_adder
			{
			private:
				const LeftType& lvalue;
				const RightType& rvalue;
			public:
				constant_adder(const LeftType& l, const RightType& r) : lvalue(l), rvalue(r) {}
				LeftType exec() const { return lvalue += rvalue; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__addition_HPP__
