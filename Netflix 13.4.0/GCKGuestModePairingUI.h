//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GCKGuestModePairingUIDelegate;

__attribute__((visibility("hidden")))
@interface GCKGuestModePairingUI : NSObject
{
    id <GCKGuestModePairingUIDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKGuestModePairingUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDidCancel;
- (void)notifyShouldStopListeningForAudioPIN;
- (void)notifyShouldStartListeningForAudioPIN;
- (void)notifyDidInputPIN:(id)arg1;
- (void)handleFailureWithReason:(id)arg1;
- (void)handleClose;
- (void)showPairingUIWithSupportedOptions:(long long)arg1;

@end

