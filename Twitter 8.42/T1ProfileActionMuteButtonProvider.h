//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileActionDataSourceButtonProvider.h>

@class TFNLegacyButton, UIViewController;

@interface T1ProfileActionMuteButtonProvider : T1ProfileActionDataSourceButtonProvider
{
    _Bool _shouldShowMuteButton;
    TFNLegacyButton *_muteButton;
    UIViewController *_controller;
}

+ (void)_t1_unmuteFleetsForUserReference:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_t1_muteFleetsForUserReference:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_t1_unmuteUserReference:(id)arg1 account:(id)arg2 unmuteFleets:(_Bool)arg3 scribeParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_t1_muteUserReference:(id)arg1 account:(id)arg2 scribeParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) TFNLegacyButton *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) _Bool shouldShowMuteButton; // @synthesize shouldShowMuteButton=_shouldShowMuteButton;
- (void)_t1_showFleetsAmbientNotificationForUserReference:(id)arg1 fleetsMuted:(_Bool)arg2;
- (void)_t1_showAmbientNotificationForUserReference:(id)arg1 scribeParameters:(id)arg2 muted:(_Bool)arg3;
- (void)_t1_muteButtonTapped:(id)arg1;
- (void)dataSourceDidInvalidateForReason:(long long)arg1;
- (id)buttonView;
- (unsigned long long)buttonState;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2 controller:(id)arg3;

@end
