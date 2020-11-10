//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NfPlaybackAuxiliaryDisplayProvider-Protocol.h>

@class NSString, NbpWatermarkTextView, UIView;

@interface PlaybackAuxiliaryDisplayProvider : NSObject <NfPlaybackAuxiliaryDisplayProvider>
{
    UIView *_hostView;
    NbpWatermarkTextView *_watermarkTextView;
    UIView *_imageBasedSubtitleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *imageBasedSubtitleView; // @synthesize imageBasedSubtitleView=_imageBasedSubtitleView;
@property(retain, nonatomic) NbpWatermarkTextView *watermarkTextView; // @synthesize watermarkTextView=_watermarkTextView;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
- (void)layoutWatermark;
- (void)layoutImageBasedSubtitleView;
- (void)showImageBasedSubtitles;
- (void)hideImageBasedSubtitles;
- (void)updateImageBasedSubtitles:(id)arg1 subtitleWidth:(long long)arg2 subtitleHeight:(long long)arg3;
- (void)cleanup;
- (void)applyWatermark:(id)arg1;
- (id)initWithHostView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

