//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel, YTShortsAudioScrubberTimelineControl, YTShortsAudioScrubberWaveformView;
@protocol YTPageStyleProvider, YTShortsAudioScrubberViewDelegate;

@interface YTShortsAudioScrubberView : UIView <YTPageStyleProvider, YTPageStyling>
{
    UIImageView *_albumArtImageView;
    UILabel *_educationalLabel;
    YTShortsAudioScrubberTimelineControl *_timelineControl;
    YTShortsAudioScrubberWaveformView *_waveformView;
    UIImage *_albumArtPlaceholderImage;
    id <YTShortsAudioScrubberViewDelegate> _delegate;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(nonatomic) __weak id <YTShortsAudioScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setAlbumArtImage:(id)arg1;
- (id)accessibilityElements;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

