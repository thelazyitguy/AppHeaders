//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTECatcherLog : NSObject
{
    NSString *_exceptionType;
    NSString *_logLevel;
    NSString *_stackTrace;
    NSString *_message;
}

+ (id)exceptionTypeForEventType:(long long)arg1;
+ (id)logLevelForEventType:(long long)arg1;
+ (void)sendLogWithExceptionType:(id)arg1 logLevel:(id)arg2 stackTraceString:(id)arg3 message:(id)arg4;
+ (void)sendStackTraceLogWithExceptionType:(id)arg1 logLevel:(id)arg2 message:(id)arg3;
+ (void)sendLogWithExceptionType:(id)arg1 logLevel:(id)arg2 stackTrace:(_Bool)arg3 message:(id)arg4;
+ (void)sendLogWithType:(long long)arg1 stackTrace:(_Bool)arg2 message:(id)arg3;
+ (void)sendFailedAssertionLogWithFileName:(char *)arg1 lineNumber:(int)arg2 message:(id)arg3;
+ (void)sendLogWithType:(long long)arg1;
+ (void)sendLogWithSlot:(id)arg1 layout:(id)arg2 stackTrace:(_Bool)arg3 message:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)initWithExceptionType:(id)arg1 logLevel:(id)arg2 stackTraceString:(id)arg3 message:(id)arg4;
- (id)POSTParams;
- (id)GETParams;
- (id)initWithType:(long long)arg1 stackTraceString:(id)arg2 message:(id)arg3;

@end

