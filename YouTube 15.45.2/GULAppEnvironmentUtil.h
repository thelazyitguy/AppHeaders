//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GULAppEnvironmentUtil : NSObject
{
}

+ (id)deploymentType;
+ (id)applePlatform;
+ (_Bool)hasSwiftRuntime;
+ (_Bool)isIOS7OrHigher;
+ (_Bool)isAppExtension;
+ (id)systemVersion;
+ (id)deviceModel;
+ (_Bool)isSimulator;
+ (_Bool)isAppStoreReceiptSandbox;
+ (_Bool)isFromAppStore;

@end
