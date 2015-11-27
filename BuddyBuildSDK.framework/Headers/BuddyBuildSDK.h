//  Copyright (c) 2015 Doe Pics Hit, Inc. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

typedef NSString*(^BBReturnNSStringCallback)();

@interface BuddyBuildSDK : NSObject
+ (void)setup:(id<UIApplicationDelegate>)bbAppDelegate;
+ (void)setup;

+ (void)setUserDisplayNameCallback:(BBReturnNSStringCallback)bbCallback;

+ (NSString*)valueForDeviceKey:(NSString*)bbKey;
@end
