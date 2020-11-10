//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol YTNGWatchMiniBarViewSizeProvider;

@interface YTNGWatchMiniBarVideoView : UIView
{
    UIView *_warningOverlayView;
    UIView *_warningIcon;
    id <YTNGWatchMiniBarViewSizeProvider> _miniBarViewSizeProvider;
    _Bool _heightPreferred;
    UIView *_playerView;
    long long _aspectRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool heightPreferred; // @synthesize heightPreferred=_heightPreferred;
@property(nonatomic) long long aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
- (_Bool)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showPlayerError:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 defaultAspectRatio:(long long)arg2 miniBarViewSizeProvider:(id)arg3;

@end

