program invalid_write
  implicit none

  integer, allocatable :: a(:)
  integer, allocatable :: b(:)
  integer :: i

  allocate(a(10))
  allocate(b(10))

  do i = 1,10
    b(i) = i
  end do

  do i = 1,100
    a(i) = i
  end do

  print *,"a = ", a
  print *,"b = ", b

  deallocate(a);
  deallocate(b);

end program
