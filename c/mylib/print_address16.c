static void
  print_address16( const char *name,
                   const void *address)
  {
      uintptr_t value = (uintptr_t)address;
      printf("%s = 0x%04" PRIxPTR "\n",
              name,
                  value & (uintptr_t)0xFFFF
            );
      return;
  }
