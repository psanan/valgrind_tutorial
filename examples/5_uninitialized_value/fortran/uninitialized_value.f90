program uninitialized_value
 
  implicit none

  real, allocatable :: a(:)

  allocate(a(10))

  a(6) = a(6) + 1.2
  
  if (a(6) < 0) then
    print *,"a(6) < 0"
  else
    print *,"a(6) >= 0"
  end if

  deallocate(a)

end program
