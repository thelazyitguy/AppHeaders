//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSArray, NSString, YTFormattedStringLabel, YTIThumbnailDetails, YTImageView;

@interface YTFullscreenMetadataHighlightsCellView : UIView <YTPageStyleProvider, YTThumbnailMapping>
{
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTImageView *_thumbnailView;
    YTIThumbnailDetails *_thumbnail;
    NSArray *_controls;
}

+ (struct CGSize)cellSizeForEntryOfColumnCount:(int)arg1;
+ (struct CGSize)cellSizeForFullWidthEntry;
+ (double)safeWidth;
+ (double)metadataHighlightsHeight;
+ (double)cellHeight;
+ (id)createSubtitleLabel;
+ (id)createTitleLabel;
- (void).cxx_destruct;
- (id)visibleViews;
@property(readonly, nonatomic) long long pageStyle;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (void)layoutSubviews;
- (void)setControls:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

