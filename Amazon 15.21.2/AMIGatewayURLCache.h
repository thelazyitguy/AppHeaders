//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMIURLManager, NSNotificationCenter, NSUserDefaults;

@interface AMIGatewayURLCache : NSObject
{
    AMIURLManager *_urlManager;
    NSNotificationCenter *_notificationCenter;
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) AMIURLManager *urlManager; // @synthesize urlManager=_urlManager;
- (void).cxx_destruct;
- (void)marketplaceChanged;
- (void)cacheGatewayURL;
- (void)cacheGatewayURLAfterStartup;
- (void)injectURLManagerDependencyAndCacheGatewayURL:(id)arg1;
- (id)cachedGatewayURL;
- (id)initWithNotificationCenter:(id)arg1 userDefaults:(id)arg2;

@end
