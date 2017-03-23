program forgotten_free_2

  implicit none

  integer, pointer :: p(:)

  allocate(p(10))

  nullify(p)

end program
