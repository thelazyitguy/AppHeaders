//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCORConfiguration;

@interface SCORAnalytics : NSObject
{
    SCORConfiguration *_configuration;
}

+ (void)crossPublisherIdWithBlock:(CDUnknownBlockType)arg1;
+ (void)activationCategoriesWithKey:(id)arg1 url:(id)arg2 publisherId:(id)arg3 publisherUniqueDeviceId:(id)arg4 block:(CDUnknownBlockType)arg5;
+ (void)clearInternalData;
+ (void)clearOfflineCache;
+ (id)configuration;
+ (void)flushOfflineCache;
+ (void)notifyExitForeground;
+ (void)notifyEnterForeground;
+ (void)notifyUxInactive;
+ (void)notifyUxActive;
+ (void)notifyDistributedContentViewForPartner:(id)arg1 content:(id)arg2;
+ (void)notifyHiddenEventWithLabels:(id)arg1;
+ (void)notifyHiddenEventWithEventInfo:(id)arg1;
+ (void)notifyHiddenEvent;
+ (void)notifyViewEventWithLabels:(id)arg1;
+ (void)notifyViewEventWithEventInfo:(id)arg1;
+ (void)notifyViewEvent;
+ (id)sharedVCEInstance;
+ (id)vceVersion;
+ (void)setLogLevel:(long long)arg1;
+ (long long)logLevel;
+ (id)version;
+ (void)start;
@property(readonly) SCORConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;

@end
