//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTImageViewLoadingDelegate-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class NSArray, NSString, UIColor, UIImageView, YTIThumbnailDetails, YTImageView;

@interface YTBundleListThumbnailsView : UIView <YTImageViewLoadingDelegate, YTPageStyling, YTThumbnailMapping, YTReusableView>
{
    UIView *_largeCollageView;
    YTImageView *_coverThumbnailView;
    YTImageView *_avatarThumbnailView;
    NSArray *_smallThumbnailViews;
    UIView *_lastSmallThumbnailOverlayScrim;
    UIImageView *_lastSmallThumbnailPlaylistIcon;
    UIColor *_textColor;
    int _artworkStyle;
    NSArray *_smallThumbnailDetails;
    YTIThumbnailDetails *_avatarThumbnailDetails;
    YTIThumbnailDetails *_coverThumbnailDetails;
}

+ (double)smallThumbnailDefaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) YTIThumbnailDetails *coverThumbnailDetails; // @synthesize coverThumbnailDetails=_coverThumbnailDetails;
@property(retain, nonatomic) YTIThumbnailDetails *avatarThumbnailDetails; // @synthesize avatarThumbnailDetails=_avatarThumbnailDetails;
@property(retain, nonatomic) NSArray *smallThumbnailDetails; // @synthesize smallThumbnailDetails=_smallThumbnailDetails;
@property(nonatomic) int artworkStyle; // @synthesize artworkStyle=_artworkStyle;
- (void)layoutPlaylistOverlayScrimOnView:(id)arg1;
- (void)layoutOneAndTwo;
- (void)layoutTwoByTwo;
- (struct CGSize)sizeFromWidth:(double)arg1;
- (struct CGSize)sizeFromHeight:(double)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)imageViewDidLoad:(id)arg1;
- (void)prepareForReuse;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

