//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLXCrash;
@protocol NFLXCrashManagerDelegateProtocol;

@interface NFLXCrashManager : NSObject
{
    id <NFLXCrashManagerDelegateProtocol> _delegate;
    NFLXCrash *_unreportedCrash;
}

+ (void)reportLocalCrash:(id)arg1;
+ (id)manager;
- (void).cxx_destruct;
@property(retain, nonatomic) NFLXCrash *unreportedCrash; // @synthesize unreportedCrash=_unreportedCrash;
@property(nonatomic) __weak id <NFLXCrashManagerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)loadLocalLastCrashData;
- (void)startLocalCrashMonitoring;
- (void)flushUnreportedCrash;
- (void)reportCrash:(id)arg1;

@end

