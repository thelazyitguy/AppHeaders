//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTPodcastEpisodeEntityHeaderContentViewDelegate-Protocol.h"
#import "SPTPodcastEpisodeViewModelDelegate-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, NSURL, SPTPodcastEpisodeEntityHeaderContentView, SPTPodcastEpisodeLogger, SPTPodcastEpisodeTheme, SPTPodcastEpisodeViewModel, UIColor;
@protocol SPTImageLoader, SPTThemableViewLayoutDelegate;

@interface SPTPodcastEpisodeEntityHeaderContentViewController : UIViewController <SPTImageLoaderDelegate, SPTEntityHeaderContentController, SPTPodcastEpisodeViewModelDelegate, SPTPodcastEpisodeEntityHeaderContentViewDelegate, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTImageLoader> _imageLoader;
    SPTPodcastEpisodeViewModel *_viewModel;
    SPTPodcastEpisodeTheme *_theme;
    SPTPodcastEpisodeEntityHeaderContentView *_headerView;
    SPTPodcastEpisodeLogger *_logger;
    UIColor *_backgroundGradientColor;
    NSURL *_lastImageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(retain, nonatomic) UIColor *backgroundGradientColor; // @synthesize backgroundGradientColor=_backgroundGradientColor;
@property(nonatomic) __weak SPTPodcastEpisodeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastEpisodeEntityHeaderContentView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTPodcastEpisodeTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTPodcastEpisodeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)didTapSubtitle;
- (void)didTapImage;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)applyThemeLayout;
- (void)viewModelUpdatedPlaybackState:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (void)useCoverArtFallback;
- (double)minimumHeight;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 imageLoader:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

