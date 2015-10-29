//
//  UIView+ArtisanNameTag.h
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Each UIView class contains the Apple property 'tag' allowing you to uniquely identify a view with an NSInteger value. The Artisan SDK adds the property artisanNameTag to all UIView classes through the use if an Objective-C category.

 If the artisanNameTag property is assigned the Artisan platform will use the artisanNameTag instead of the generated name for the view as it appears in the Artisan Canvas and in analytic reports.

 For best results you should set this value in viewDidLoad or viewWillAppear, before he view appears on the screen.

 <h3>Usage Example</h3>

 <code><pre>
 view.artisanNameTag = @"Add Button";
 </pre></code>
 */
@interface UIView (ArtisanNameTag)

@property (nonatomic, copy) NSString *artisanNameTag;

@end
