//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel, UIStackView;

@interface MALXPlaybackBarView : UIView
{
    UILabel *_playbackLabel;
    UIImage *_backgroundArt;
    UIStackView *_contentStackView;
    UIImageView *_backgroundAlbumArtImageView;
}

@property(retain, nonatomic) UIImageView *backgroundAlbumArtImageView; // @synthesize backgroundAlbumArtImageView=_backgroundAlbumArtImageView;
@property(nonatomic) __weak UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) UIImage *backgroundArt; // @synthesize backgroundArt=_backgroundArt;
@property(nonatomic) __weak UILabel *playbackLabel; // @synthesize playbackLabel=_playbackLabel;
- (void).cxx_destruct;
- (void)setTrackInfoShadowsOnView:(id)arg1;
- (void)addBackgroundAlbumArt;
- (void)setUpShadows;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

