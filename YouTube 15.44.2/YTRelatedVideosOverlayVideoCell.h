//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/GA11YMixinEmbedder-Protocol.h>
#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTRelatedVideoCellProtocol-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class FLXLayout, NSString, UIImageView, UIView, YTBadge, YTFormattedStringLabel, YTRelatedVideosOverlayThumbnailCellView;
@protocol GA11YMixinImpl, YTResponder;

@interface YTRelatedVideosOverlayVideoCell : YTCollectionViewCell <YTThumbnailMapping, GA11YMixinEmbedder, YTCollectionViewCellProtocol, YTRelatedVideoCellProtocol>
{
    FLXLayout *_layout;
    id _entry;
    double _expandedFraction;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTRelatedVideosOverlayThumbnailCellView *_overlayView;
    UIView *_overlayBorder;
    YTBadge *_durationBadge;
    UIView *_playlistView;
    YTFormattedStringLabel *_playlistLabel;
    UIImageView *_playlistImageView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *playlistImageView; // @synthesize playlistImageView=_playlistImageView;
@property(readonly, nonatomic) YTFormattedStringLabel *playlistLabel; // @synthesize playlistLabel=_playlistLabel;
@property(readonly, nonatomic) UIView *playlistView; // @synthesize playlistView=_playlistView;
@property(readonly, nonatomic) YTBadge *durationBadge; // @synthesize durationBadge=_durationBadge;
@property(readonly, nonatomic) UIView *overlayBorder; // @synthesize overlayBorder=_overlayBorder;
@property(readonly, nonatomic) YTRelatedVideosOverlayThumbnailCellView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)prepareForEntry:(id)arg1;
- (void)setVideoEntry:(id)arg1;
- (void)setPlaylistEntry:(id)arg1;
@property(readonly, nonatomic) UIView *rootView;
- (void)resetLayout;
- (void)setExpandedFraction:(double)arg1;
- (id)thumbnailMappings;
- (id)cellNavigationTitle;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibleViews;
- (id)newOverlayView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

