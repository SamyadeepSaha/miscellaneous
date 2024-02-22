program variables
    implicit none
    integer :: amount
    real :: pi
    complex :: frequency
    character :: initial
    logical :: isOkay

    integer :: age

    ! Assignment 
    amount = 10
    pi = 3.14
    frequency = (10, -0.5)
    initial = 'A'
    isOkay = .true.

    ! Standard out
    print *, 'The value of amount is', amount
    print *, 'The value of pi is', pi
    print *, 'The value of frequency is', frequency
    print *, 'The value of initial is', initial
    print *, 'The value of isOkay is', isOkay

    ! Standard in and out
    !implicit none
    !integer :: age
    print *, 'Enter your age'
    read(*,*) age
    print *, 'Your age is', age
end program variables
