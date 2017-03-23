program illegal_read

  implicit none

  integer, allocatable :: a(:)
  integer :: b

  allocate(a(10))
  a = 1
  b = a(11)
  print *,'b= ',b
  deallocate(a)

end program 
