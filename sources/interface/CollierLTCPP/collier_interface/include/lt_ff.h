      ! from ff.h:
      ! regularization parameters (modified)
      RealType lambda
      common /ltregul_clr/ lambda

      ! from lt.h: (modified)
      integer epsi
      common /ltvars_clr/ epsi

      ! CB: to treat UV divergences properly
      RealType uvdiv
      common /ltuvdiv_clr/ uvdiv
