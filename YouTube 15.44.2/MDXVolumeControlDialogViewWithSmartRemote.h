//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/MDXVolumeControlDialogViewProtocol-Protocol.h>
#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class MDCSlider, NSString, YTFormattedStringLabel, YTImageView, YTQTMButton;

@interface MDXVolumeControlDialogViewWithSmartRemote : UIView <YTPageStyleProvider, YTPageStyling, MDXVolumeControlDialogViewProtocol>
{
    YTImageView *_mutedVolumeImageView;
    YTImageView *_lowVolumeImageView;
    YTImageView *_highVolumeImageView;
    UIView *_voiceButtonBorder;
    YTFormattedStringLabel *_voiceButtonLabel;
    UIView *_remoteButtonBorder;
    YTFormattedStringLabel *_remoteButtonLabel;
    UIView *_horizontalBar;
    YTFormattedStringLabel *_signInPromotionLabel;
    UIView *_bottomHorizontalBar;
    double _volume;
    YTQTMButton *_closeButton;
    YTQTMButton *_disconnectButton;
    YTFormattedStringLabel *_screenNameLabel;
    YTQTMButton *_voiceSearchButton;
    YTQTMButton *_remoteButton;
    MDCSlider *_volumeSlider;
    YTQTMButton *_signInButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTQTMButton *signInButton; // @synthesize signInButton=_signInButton;
@property(readonly, nonatomic) MDCSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(readonly, nonatomic) YTQTMButton *remoteButton; // @synthesize remoteButton=_remoteButton;
@property(readonly, nonatomic) YTQTMButton *voiceSearchButton; // @synthesize voiceSearchButton=_voiceSearchButton;
@property(readonly, nonatomic) YTFormattedStringLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(readonly, nonatomic) YTQTMButton *disconnectButton; // @synthesize disconnectButton=_disconnectButton;
@property(readonly, nonatomic) YTQTMButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (_Bool)isSmartRemoteEnabled;
- (void)updateRemoteButtonsVisibility;
- (id)remoteButtonWithImage:(id)arg1;
- (id)remoteButtonBorder;
- (void)showVolumeImage:(id)arg1;
- (void)sliderDidChangeValue:(id)arg1;
- (void)doLayoutSubviews;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
