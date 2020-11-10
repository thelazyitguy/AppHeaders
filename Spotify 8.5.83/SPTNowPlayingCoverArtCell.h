//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingContentLayerCell.h"

@class NSArray, SPTNowPlayingCoverArtImageView, SPTTheme, UIView;

@interface SPTNowPlayingCoverArtCell : SPTNowPlayingContentLayerCell
{
    SPTTheme *_theme;
    SPTNowPlayingCoverArtImageView *_imageView;
    UIView *_windowedContentView;
    NSArray *_windowedContentViewConstraints;
    struct UIEdgeInsets _windowedContentInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *windowedContentViewConstraints; // @synthesize windowedContentViewConstraints=_windowedContentViewConstraints;
@property(retain, nonatomic) UIView *windowedContentView; // @synthesize windowedContentView=_windowedContentView;
@property(retain, nonatomic) SPTNowPlayingCoverArtImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) struct UIEdgeInsets windowedContentInsets; // @synthesize windowedContentInsets=_windowedContentInsets;
- (void)roundCorners:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

