#import <React/RCTConvert.h>

@interface RCTConvert (Modal)

@end

@implementation RCTConvert (Modal)

RCT_ENUM_CONVERTER(UIModalTransitionStyle,
				   (@{@"coverVertical": @(UIModalTransitionStyleCoverVertical),
#if !TARGET_OS_TV
					  @"flipHorizontal": @(UIModalTransitionStyleFlipHorizontal),
#endif
					  @"crossDissolve": @(UIModalTransitionStyleCrossDissolve),
#if !TARGET_OS_TV
					  @"partialCurl": @(UIModalTransitionStylePartialCurl)
#endif
					  }), UIModalTransitionStyleCoverVertical, integerValue)

RCT_ENUM_CONVERTER(UIModalPresentationStyle,
				   (@{@"fullScreen": @(UIModalPresentationFullScreen),
#if !TARGET_OS_TV
					  @"pageSheet": @(UIModalPresentationPageSheet),
					  @"formSheet": @(UIModalPresentationFormSheet),
#endif
					  @"currentContext": @(UIModalPresentationCurrentContext),
					  @"custom": @(UIModalPresentationCustom),
					  @"overFullScreen": @(UIModalPresentationOverFullScreen),
					  @"overCurrentContext": @(UIModalPresentationOverCurrentContext),
#if !TARGET_OS_TV
					  @"popover": @(UIModalPresentationPopover),
#endif
					  @"none": @(UIModalPresentationNone)
					  }), UIModalPresentationFullScreen, integerValue)
@end

