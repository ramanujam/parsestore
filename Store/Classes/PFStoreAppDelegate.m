//
//  PFAppDelegate.m
//  Stripe
//
//  Created by Andrew Wang on 2/25/13.
//

#import "PFProductsViewController.h"
#import "PFStoreAppDelegate.h"
#import "Taplytics.h"
//#import <Optimizely/Optimizely.h>
#import <ArtisanSDK/ArtisanSDK.h>
#import <Leanplum/Leanplum.h>


@implementation PFStoreAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
    [Parse setApplicationId:infoDictionary[@"PARSE_APPLICATION_ID"] clientKey:infoDictionary[@"PARSE_CLIENT_KEY"]];
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];

    [ARManager startWithAppId:@"54b9785e2b22207111000008"];

    
//    [Optimizely startOptimizelyWithAPIToken:@"AAM7hIkAFZ7nEK6QhAPwIhpM3DmIyd1Y~2877690650" launchOptions:launchOptions];
    
    
    UINavigationController *rootController = [[UINavigationController alloc] initWithRootViewController:[[PFProductsViewController alloc] init]];
    rootController.navigationBar.hidden = YES;
    self.window.rootViewController = rootController;


    #ifdef DEBUG
        LEANPLUM_USE_ADVERTISING_ID;
        [Leanplum setAppId:@"app_eBabZfsaJoZ16IpFGi9al6XL2BvYMdtjhPJp6LyaUtc" withDevelopmentKey:@"dev_zsn3c9fHeKHfFfpqjLtikMAwkYrav8C3HEq1aR2YjKA"];
    #else
        [Leanplum setAppId:@"app_eBabZfsaJoZ16IpFGi9al6XL2BvYMdtjhPJp6LyaUtc" withProductionKey:@"prod_qLeGN9mn3ZGXaKDZHGeirXbUjyrbJfyxfcNUejaKbHQ"];
    #endif
    
    [Leanplum syncResourcePaths:@[@"MyResources/.*"] excluding:nil async:YES];
    [Leanplum allowInterfaceEditing];
    [Leanplum trackAllAppScreens];
    [Leanplum start];

    [Taplytics startTaplyticsAPIKey:@"0c25ec0460b29c33e48c4d7adc7c139eea7f7dd5"];


    [Taplytics setUserAttributes:@{
    @"user_id": @123456,
    @"email": @"jdoe@gmail.com",
    @"gender": @"female",
    @"age": @25,
    @"customData": @{
           @"has": @YES,
           @"purchases": @3,
           @"totalRevenue": @150
           }
    }];
    
    
    return YES;
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation{

//    if([Optimizely handleOpenURL:url]) {
//        return YES;
//    }

    return NO;
}


@end
