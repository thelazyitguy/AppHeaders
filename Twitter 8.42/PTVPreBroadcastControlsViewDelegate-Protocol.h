//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVPreBroadcastControlsView;

@protocol PTVPreBroadcastControlsViewDelegate <NSObject>
- (void)preBroadcastControlsViewDidPressAudioScopeButton:(PTVPreBroadcastControlsView *)arg1;
- (void)preBroadcastControlsViewDidPressGuestBroadcastingButton:(PTVPreBroadcastControlsView *)arg1;
- (void)preBroadcastControlsViewDidPressAcceptGifts:(PTVPreBroadcastControlsView *)arg1;
- (void)preBroadcastControlsViewDidPressShareOnTwitterButtonWhileDisabled:(PTVPreBroadcastControlsView *)arg1;
- (void)preBroadcastControlsViewDidPressShareOnTwitterButton:(PTVPreBroadcastControlsView *)arg1;
- (void)preBroadcastControlsViewDidPressChatTypeButton:(PTVPreBroadcastControlsView *)arg1;

@optional
- (_Bool)preBroadcastControlsView:(PTVPreBroadcastControlsView *)arg1 didChangeShareLocationTo:(_Bool)arg2;
@end

