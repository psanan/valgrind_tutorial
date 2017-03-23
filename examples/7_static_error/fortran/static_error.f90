program static_error

  implicit none

  integer :: a(10)
  integer :: b,c

  a(12) = 3

  b = a(13)
  print *,'b = ',b

  c = a(12)
  print *,'c = ',c

  if (a(8) < 0) then
    print *,'a(8) < 0'
  else
    print *,'a(8) >= 0'
  end if

end program
