}

void *
ACL::operator new (size_t byteCount)
{
    fatal ("unusable ACL::new");
    return (void *)1;
}

void
ACL::operator delete (void *address)
{
    fatal ("unusable ACL::delete");
}