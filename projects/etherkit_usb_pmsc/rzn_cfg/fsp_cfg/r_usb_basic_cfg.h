/* generated configuration header file - do not edit */
#ifndef R_USB_BASIC_CFG_H_
#define R_USB_BASIC_CFG_H_
#include "r_usb_class_cfg.h"

            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_HCDC_USE
            #endif
            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_HHID_USE
            #endif
            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_HMSC_USE
            #endif
            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_HVND_USE
            #endif
            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_PCDC_USE
            #endif
            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_PHID_USE
            #endif
            #if (1 != FSP_NOT_DEFINED)
            #define USB_CFG_PMSC_USE
            #endif
            #if (FSP_NOT_DEFINED != FSP_NOT_DEFINED)
            #define USB_CFG_PVND_USE
            #endif

            #if (defined(USB_CFG_HCDC_USE) || defined(USB_CFG_HMSC_USE) || defined(USB_CFG_HHID_USE) || defined(USB_CFG_HVND_USE))
            #define USB_CFG_HOST_MODE 1
            #else
            #define USB_CFG_HOST_MODE 0
            #endif

            #if (defined(USB_CFG_PCDC_USE) || defined(USB_CFG_PMSC_USE) || defined(USB_CFG_PHID_USE) || defined(USB_CFG_PVND_USE))
            #define USB_CFG_PERI_MODE 2
            #else
            #define USB_CFG_PERI_MODE 0
            #endif

            #define USB_CFG_MODE (USB_CFG_PERI_MODE | USB_CFG_HOST_MODE)

            #define USB_CFG_PARAM_CHECKING_ENABLE (BSP_CFG_PARAM_CHECKING_ENABLE)
            #define USB_CFG_BUSWAIT (USB_CFG_BUSWAIT_7)
            #define USB_CFG_BC (USB_CFG_DISABLE)
            #define USB_CFG_VBUS (USB_CFG_HIGH)
            #define USB_CFG_DCP (USB_CFG_DISABLE)
            #define USB_CFG_CLASS_REQUEST (USB_CFG_ENABLE)
            #define USB_CFG_DBLB (USB_CFG_DBLBON)
            #define USB_CFG_CNTMD (USB_CFG_CNTMDOFF)
            #define USB_SRC_ADDRESS (NULL)
            #define USB_DEST_ADDRESS (NULL)
            #define USB_CFG_TPLCNT (1)
            #define USB_CFG_TPL USB_NOVENDOR, USB_NOPRODUCT
            #define USB_CFG_DMA  (USB_CFG_DISABLE)
            #define USB_CFG_MULTIPLEX_INTERRUPT_SUPPORTED (0)
            #if USB_CFG_MULTIPLEX_INTERRUPT_SUPPORTED
             #define USB_CFG_MULTIPLEX_INTERRUPT_ENABLE         BSP_INTERRUPT_ENABLE
             #define USB_CFG_MULTIPLEX_INTERRUPT_DISABLE        BSP_INTERRUPT_DISABLE
            #else
             #define USB_CFG_MULTIPLEX_INTERRUPT_ENABLE
             #define USB_CFG_MULTIPLEX_INTERRUPT_DISABLE
            #endif
            #define USB_HOST_COMPLIANCE_MODE  (USB_CFG_DISABLE)
#endif /* R_USB_BASIC_CFG_H_ */
