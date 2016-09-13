
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0422
#error This file was generated by a newer version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0600
#error This file was generated by an older version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>



namespace deprecated
{
namespace bondmeta
{
    
    struct HasMetaFields
    {
        std::basic_string<char, std::char_traits<char>, typename arena::rebind<char>::other> full_name;
        std::basic_string<char, std::char_traits<char>, typename arena::rebind<char>::other> name;
        
        HasMetaFields()
        {
            InitMetadata("HasMetaFields", "deprecated.bondmeta.HasMetaFields");
        }

        HasMetaFields(const HasMetaFields& other)
          : full_name(other.full_name.get_allocator()),
            name(other.name.get_allocator())
        {
            InitMetadata("HasMetaFields", "deprecated.bondmeta.HasMetaFields");
        }
        
#if !defined(BOND_NO_CXX11_RVALUE_REFERENCES)
        HasMetaFields(HasMetaFields&& other)
          : full_name(std::move(other.full_name)),
            name(std::move(other.name))
        {
            InitMetadata("HasMetaFields", "deprecated.bondmeta.HasMetaFields");
        }
#endif
        
        explicit
        HasMetaFields(const arena& allocator)
          : full_name(allocator),
            name(allocator)
        {
            InitMetadata("HasMetaFields", "deprecated.bondmeta.HasMetaFields");
        }
        
        HasMetaFields& operator=(const HasMetaFields& other)
        {
            HasMetaFields(other).swap(*this);
            return *this;
        }

        bool operator==(const HasMetaFields&) const
        {
            return true
                /* skip bond_meta::full_name field 'full_name' */
                /* skip bond_meta::name field 'name' */;
        }

        bool operator!=(const HasMetaFields& other) const
        {
            return !(*this == other);
        }

        void swap(HasMetaFields&)
        {
            using std::swap;
            /* skip bond_meta::full_name field 'full_name' */
            /* skip bond_meta::name field 'name' */
        }

        struct Schema;

    protected:
        void InitMetadata(const char* name, const char* qualified_name)
        {
            this->name = name;
            this->full_name = qualified_name;
        }
    };

    inline void swap(::deprecated::bondmeta::HasMetaFields& left, ::deprecated::bondmeta::HasMetaFields& right)
    {
        left.swap(right);
    }
} // namespace bondmeta
} // namespace deprecated

#if !defined(BOND_NO_CXX11_ALLOCATOR)
namespace std
{
    template <typename _Alloc>
    struct uses_allocator< ::deprecated::bondmeta::HasMetaFields, _Alloc>
        : is_convertible<_Alloc, arena>
    {};
}
#endif

