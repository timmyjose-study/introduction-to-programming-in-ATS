/*
**
** The C code is generated by [ATS/Postiats-0-4-1]
** The starting compilation time is: 2021-9-20: 17h:34m
**
*/

/*
** include runtime header files
*/
#ifndef _ATS_CCOMP_HEADER_NONE_
#include "pats_ccomp_config.h"
#include "pats_ccomp_basics.h"
#include "pats_ccomp_typedefs.h"
#include "pats_ccomp_instrset.h"
#include "pats_ccomp_memalloc.h"
#ifndef _ATS_CCOMP_EXCEPTION_NONE_
#include "pats_ccomp_memalloca.h"
#include "pats_ccomp_exception.h"
#endif // end of [_ATS_CCOMP_EXCEPTION_NONE_]
#endif /* _ATS_CCOMP_HEADER_NONE_ */


/*
** include prelude cats files
*/
#ifndef _ATS_CCOMP_PRELUDE_NONE_
//
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/integer_long.cats"
#include "prelude/CATS/integer_size.cats"
#include "prelude/CATS/integer_short.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/memory.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/strptr.cats"
//
#include "prelude/CATS/fprintf.cats"
//
#include "prelude/CATS/filebas.cats"
//
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/arrayptr.cats"
#include "prelude/CATS/arrayref.cats"
#include "prelude/CATS/matrix.cats"
#include "prelude/CATS/matrixptr.cats"
//
#endif /* _ATS_CCOMP_PRELUDE_NONE_ */
/*
** for user-supplied prelude
*/
#ifdef _ATS_CCOMP_PRELUDE_USER_
//
#include _ATS_CCOMP_PRELUDE_USER_
//
#endif /* _ATS_CCOMP_PRELUDE_USER_ */
/*
** for user2-supplied prelude
*/
#ifdef _ATS_CCOMP_PRELUDE_USER2_
//
#include _ATS_CCOMP_PRELUDE_USER2_
//
#endif /* _ATS_CCOMP_PRELUDE_USER2_ */

/*
staload-prologues(beg)
*/
/*
staload-prologues(end)
*/
/*
typedefs-for-tyrecs-and-tysums(beg)
*/
/*
typedefs-for-tyrecs-and-tysums(end)
*/
/*
dynconlst-declaration(beg)
*/
/*
dynconlst-declaration(end)
*/
/*
dyncstlst-declaration(beg)
*/
/*
dyncstlst-declaration(end)
*/
/*
dynvalist-implementation(beg)
*/
/*
dynvalist-implementation(end)
*/
/*
exnconlst-declaration(beg)
*/
#ifndef _ATS_CCOMP_EXCEPTION_NONE_
ATSextern()
atsvoid_t0ype
the_atsexncon_initize
(
  atstype_exnconptr d2c, atstype_string exnmsg
) ;
#endif // end of [_ATS_CCOMP_EXCEPTION_NONE_]
/*
exnconlst-declaration(end)
*/
/*
extypelst-declaration(beg)
*/
/*
extypelst-declaration(end)
*/
/*
assumelst-declaration(beg)
*/
#ifndef _ATS_CCOMP_ASSUME_CHECK_NONE_
#endif // #ifndef(_ATS_CCOMP_ASSUME_CHECK_NONE_)
/*
assumelst-declaration(end)
*/
#if(0)
/*
** for initialization(dynloading)
*/
ATSdynloadflag_minit(_057_Users_057_z0ltan_057_dev_057_study_057_ats_057_introduction_055_to_055_programming_055_in_055_ATS_057_Chapter8_057_calc_057_calc_056_sats__dynloadflag) ;
ATSextern()
atsvoid_t0ype
_057_Users_057_z0ltan_057_dev_057_study_057_ats_057_introduction_055_to_055_programming_055_in_055_ATS_057_Chapter8_057_calc_057_calc_056_sats__dynload()
{
ATSfunbody_beg()
ATSdynload(/*void*/)
ATSdynloadflag_sta(
_057_Users_057_z0ltan_057_dev_057_study_057_ats_057_introduction_055_to_055_programming_055_in_055_ATS_057_Chapter8_057_calc_057_calc_056_sats__dynloadflag
) ;
ATSif(
ATSCKiseqz(
_057_Users_057_z0ltan_057_dev_057_study_057_ats_057_introduction_055_to_055_programming_055_in_055_ATS_057_Chapter8_057_calc_057_calc_056_sats__dynloadflag
)
) ATSthen() {
ATSdynloadset(_057_Users_057_z0ltan_057_dev_057_study_057_ats_057_introduction_055_to_055_programming_055_in_055_ATS_057_Chapter8_057_calc_057_calc_056_sats__dynloadflag) ;
/*
dynexnlst-initize(beg)
*/
/*
dynexnlst-initize(end)
*/
} /* ATSendif */
ATSfunbody_end()
ATSreturn_void(tmpret_void) ;
} /* end of [*_dynload] */
#endif // end of [#if(0)]

/* ****** ****** */

/* end-of-compilation-unit */