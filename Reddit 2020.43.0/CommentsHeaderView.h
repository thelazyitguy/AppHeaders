//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseImageView;
@protocol ViewContext;

@interface CommentsHeaderView : BaseView
{
    _Bool _hasLoadedOnce;
    _Bool _isPanning;
    id <ViewContext> _viewContext;
    BaseImageView *_headerImageView;
    BaseImageView *_topGradientView;
    BaseView *_headerOverlayView;
    BaseView *_videoHeaderBackground;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(retain, nonatomic) BaseView *videoHeaderBackground; // @synthesize videoHeaderBackground=_videoHeaderBackground;
@property(retain, nonatomic) BaseView *headerOverlayView; // @synthesize headerOverlayView=_headerOverlayView;
@property(retain, nonatomic) BaseImageView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) BaseImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
- (double)topPadding;
- (void)didCompleteTransition;
- (void)updateWithPercentDisplayed:(double)arg1;
- (void)useBackgroundColorFromPost:(id)arg1 forView:(id)arg2;
- (void)refreshStylingWithPost:(id)arg1;
- (void)configureWithPost:(id)arg1 feedPostOptions:(id)arg2;
- (id)initWithViewContext:(id)arg1;

@end
