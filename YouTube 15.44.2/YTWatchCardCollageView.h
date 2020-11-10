//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWatchCardCallToActionView.h"

@class YTIWatchCardCollageRenderer, YTImageView, YTWatchCardImageContainer;

@interface YTWatchCardCollageView : YTBaseWatchCardCallToActionView
{
    YTWatchCardImageContainer *_leftThumbnailContainer;
    YTImageView *_leftThumbnailView;
    YTWatchCardImageContainer *_topRightThumbnailContainer;
    YTImageView *_topRightThumbnailView;
    YTWatchCardImageContainer *_bottomRightThumbnailContainer;
    YTImageView *_bottomRightThumbnailView;
    YTIWatchCardCollageRenderer *_renderer;
}

+ (double)preferredHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YTIWatchCardCollageRenderer *renderer; // @synthesize renderer=_renderer;
- (id)thumbnailMappings;
- (void)didPressActionButton;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

@end

