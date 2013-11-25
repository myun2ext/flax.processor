#ifndef __github_com_myun2__flax__processor__decrement_HPP__
#define __github_com_myun2__flax__processor__decrement_HPP__

namespace myun2
{
	namespace flax
	{
		namespace proc
		{
			template <typename Type>
			class decrement
			{
			private:
				Type& value;
			public:
				decrement(Type& v) : value(v) {}
				Type exec() const { return --value; }
			};

			template <typename Type>
			class constant_decrement
			{
			private:
				Type value;
			public:
				constant_decrement(const Type& v) : value(v) {}
				Type exec() const { return --value; }
			};
		}
	}
}

#endif//__github_com_myun2__flax__processor__decrement_HPP__
