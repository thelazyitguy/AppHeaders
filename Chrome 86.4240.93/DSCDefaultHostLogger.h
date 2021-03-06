//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCHostLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface DSCDefaultHostLogger : NSObject <DSCHostLogger>
{
    NSObject<OS_os_log> *_log;
    long long _minimumLogLevel;
}

- (void).cxx_destruct;
@property(nonatomic) long long minimumLogLevel; // @synthesize minimumLogLevel=_minimumLogLevel;
- (id)tagForLevel:(long long)arg1;
- (void)assertCondition:(id)arg1 withMessage:(id)arg2 stack:(id)arg3 fromFile:(id)arg4 line:(int)arg5 function:(id)arg6;
- (void)logMessage:(id)arg1 withLevel:(long long)arg2 fromLocation:(id)arg3 function:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

