//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADEumCrashContext : NSObject
{
}

+ (void)callAsyncSafeCrashCallbackForTesting;
+ (void)cleanAfterTesting;
+ (void)setupForTestingWithContextFile:(char *)arg1;
+ (void)leaveBreadcrumb:(id)arg1;
+ (void)setProperty:(id)arg1 toJSONFromObject:(id)arg2;
+ (void)setupWithCrashReporter:(id)arg1;
+ (id)getAndClearPendingContext;

@end
