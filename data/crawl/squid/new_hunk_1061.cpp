}

void *
ACL::operator new (size_t)
{
    fatal ("unusable ACL::new");
    return (void *)1;
}

void
ACL::operator delete (void *)
{
    fatal ("unusable ACL::delete");
}
