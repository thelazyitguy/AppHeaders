//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeEventEmitter-Protocol.h"

@class NSNotificationCenter, NSString;
@protocol SPTVolumeEventReceiver;

@interface SPTVolumeSystemPopupEmitter : NSObject <SPTVolumeEventEmitter>
{
    id <SPTVolumeEventReceiver> delegate;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void)didEnableSystemPopup;
- (void)didDisableSystemPopup;
- (void)dealloc;
- (void)setupObserving;
- (id)initWithNotificationCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

