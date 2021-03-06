//
//  STPOSXCheckoutWebViewAdapter.h
//  Stripe
//
//  Created by Jack Flintermann on 1/7/15.
//  Copyright (c) 2015 Stripe, Inc. All rights reserved.
//

#if !TARGET_OS_IPHONE

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

#import "STPCheckoutWebViewAdapter.h"
#import "STPNullabilityMacros.h"

@interface STPOSXCheckoutWebViewAdapter : NSObject<STPCheckoutWebViewAdapter>
@property (nonatomic, stp_nullable) WebView *webView;
@end

#endif
