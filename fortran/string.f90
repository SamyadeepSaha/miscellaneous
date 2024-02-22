program string
    implicit none
    character(len=9) :: first_name
    character(len=4) :: last_name
    character(:), allocatable :: full_name

    first_name = 'Samyadeep'
    last_name = 'Saha'

    full_name = first_name//' '//last_name
    print *, full_name

    deallocate(full_name)
end program string
