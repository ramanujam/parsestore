//
//  UIApplication+ArtisanDelegate.h
//  ARUXFLIP
//
//  Copyright (c) 2015 Artisan Mobile, Inc. All rights reserved.
//
//

#import <Foundation/Foundation.h>

@interface UIApplication (ArtisanDelegate)

/** Returns a reference to the original, un-proxied UIApplication delegate proxy for this UIApplication instance.
 Warning: If Artisan has not been initialized or the Application Delegate proxy has been disabled, this method may return nil. */
- (id<UIApplicationDelegate>)artisanAppDelegate;

@end
