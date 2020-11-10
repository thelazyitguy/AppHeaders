//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class NSString, YTSystemNotifications;
@protocol HAMClock;

@interface MLMemoryPressureMonitor : NSObject <YTSystemNotificationsObserver>
{
    YTSystemNotifications *_systemNotifications;
    id <HAMClock> _clock;
    // Error parsing type: {atomic<MLMemoryPressureRawInfo>="__a_"{__cxx_atomic_impl<MLMemoryPressureRawInfo, std::__1::__cxx_atomic_base_impl<MLMemoryPressureRawInfo> >="__a_value"A{?}}}, name: _rawInfo
}

- (void).cxx_destruct;
- (void)appMemoryPressureLevelDidChange:(unsigned long long)arg1;
- (CDStruct_316206b0)memoryPressureInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

