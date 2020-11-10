//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"

@class NSString, UIImageView, YTLabel;
@protocol GA11YMixinImpl;

@interface YTInlineMutedPlaybackAudioIconView : UIView <GA11YMixinEmbedder>
{
    UIImageView *_audioSoundIconImageView;
    UIView *_circularBackgroundView;
    YTLabel *_userEducationLabel;
    _Bool _audioOn;
    _Bool _activated;
    _Bool _enableUserEducation;
    id <GA11YMixinImpl> _accessibilityMixin;
}

- (void).cxx_destruct;
- (id)volumeOffLightImage;
- (id)volumeUpLightImage;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)setEnableUserEducation:(_Bool)arg1;
- (void)setActivated:(_Bool)arg1;
- (void)setAudioOn:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

