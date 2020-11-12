//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;
@protocol XPTScheduledExecutor;

@protocol XPTExecutorFactory <JavaObject>
- (id <XPTScheduledExecutor>)newExecutorWithInt:(int)arg1 withNSString:(NSString *)arg2;
- (id <XPTScheduledExecutor>)newSingleThreadedExecutorWithNSString:(NSString *)arg1;
- (id <XPTScheduledExecutor>)newMainThreadExecutor;
@end
