//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CCAEventLog : NSObject
{
    NSDictionary *eventTypeNames;
    NSString *_eventLog;
}

+ (id)getAppId;
+ (id)timestamp;
+ (id)getInitString;
@property(retain, nonatomic) NSString *eventLog; // @synthesize eventLog=_eventLog;
- (void).cxx_destruct;
- (_Bool)isFinalStep:(id)arg1;
- (void)sendLogs;
- (void)logErrorWithTag:(Class)arg1 errorCodeInt:(long long)arg2 errorMessage:(id)arg3;
- (void)logErrorWithTag:(Class)arg1 errorCode:(id)arg2 errorMessage:(id)arg3;
- (void)logErrorWithTag:(Class)arg1 error:(id)arg2;
- (void)logEventWithTag:(Class)arg1 event:(id)arg2;
- (void)logEventWithTag:(Class)arg1 event:(id)arg2 additionalInfo:(id)arg3;

@end
