//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NewRelic : NSObject
{
}

+ (id)keyAttributes;
+ (void)setMaxEventPoolSize:(unsigned int)arg1;
+ (void)setMaxEventBufferTime:(unsigned int)arg1;
+ (_Bool)recordBreadcrumb:(id)arg1 attributes:(id)arg2;
+ (_Bool)recordCustomEvent:(id)arg1 attributes:(id)arg2;
+ (_Bool)recordCustomEvent:(id)arg1 name:(id)arg2 attributes:(id)arg3;
+ (_Bool)removeAllAttributes;
+ (_Bool)removeAttribute:(id)arg1;
+ (_Bool)setUserId:(id)arg1;
+ (_Bool)incrementAttribute:(id)arg1 value:(id)arg2;
+ (_Bool)incrementAttribute:(id)arg1;
+ (_Bool)setAttribute:(id)arg1 value:(id)arg2;
+ (_Bool)harvestNow;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2 value:(id)arg3 valueUnits:(id)arg4 countUnits:(id)arg5;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2 value:(id)arg3 valueUnits:(id)arg4;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2 value:(id)arg3;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2;
+ (void)endTracingMethodWithTimer:(id)arg1;
+ (void)startTracingMethodNamed:(id)arg1 objectNamed:(id)arg2 timer:(id)arg3 category:(int)arg4;
+ (void)startTracingMethod:(SEL)arg1 object:(id)arg2 timer:(id)arg3 category:(int)arg4;
+ (void)stopCurrentInteraction:(id)arg1;
+ (id)startInteractionWithName:(id)arg1;
+ (void)noticeNetworkFailureForURL:(id)arg1 httpMethod:(id)arg2 withTimer:(id)arg3 andFailureCode:(long long)arg4;
+ (void)noticeNetworkRequestForURL:(id)arg1 httpMethod:(id)arg2 withTimer:(id)arg3 responseHeaders:(id)arg4 statusCode:(long long)arg5 bytesSent:(unsigned long long)arg6 bytesReceived:(unsigned long long)arg7 responseData:(id)arg8 andParams:(id)arg9;
+ (id)createAndStartTimer;
+ (void)startWithApplicationToken:(id)arg1 andCollectorAddress:(id)arg2 andCrashCollectorAddress:(id)arg3;
+ (void)startWithApplicationToken:(id)arg1 andCollectorAddress:(id)arg2;
+ (void)startWithApplicationToken:(id)arg1 withoutSecurity:(_Bool)arg2;
+ (void)startWithApplicationToken:(id)arg1;
+ (void)enableCrashReporting:(_Bool)arg1;
+ (void)disableFeatures:(unsigned long long)arg1;
+ (void)enableFeatures:(unsigned long long)arg1;
+ (id)crossProcessId;
+ (id)currentSessionId;
+ (void)setPlatformVersion:(id)arg1;
+ (void)setPlatform:(unsigned long long)arg1;
+ (void)recordError:(id)arg1 attributes:(id)arg2;
+ (void)recordError:(id)arg1;
+ (void)recordHandledException:(id)arg1 withAttributes:(id)arg2;
+ (void)recordHandledException:(id)arg1;
+ (void)setApplicationBuild:(id)arg1;
+ (void)setApplicationVersion:(id)arg1;
+ (void)crashNow:(id)arg1;
+ (void)crashNow;

@end

