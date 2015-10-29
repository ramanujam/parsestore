//
//  UIViewController+ArtisanNameTag.h
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 If the artisanNameTag property is assigned the Artisan platform will use the artisanNameTag instead of the generated name when displaying the view controller while building an experiment and in analytic reports.
 
 For best results you should set this value in viewDidLoad.

 <h3>Usage Example</h3>

 <code><pre>
 self.artisanNameTag = @"Login Screen";
 </pre></code>
 */
@interface UIViewController (ArtisanNameTag)

@property (nonatomic, copy) NSString *artisanNameTag;

@end
