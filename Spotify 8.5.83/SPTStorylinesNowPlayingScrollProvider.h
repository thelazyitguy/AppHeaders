//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollProvider-Protocol.h"

@class NSString, SPTStorylinesEnabledManager, SPTStorylinesNowPlayingViewController, SPTStorylinesNowPlayingViewControllerFactory, SPTStorylinesViewModel;
@protocol SPTNowPlayingScrollProviderDelegate;

@interface SPTStorylinesNowPlayingScrollProvider : NSObject <SPTNowPlayingScrollProvider>
{
    SPTStorylinesEnabledManager *_enabledManager;
    SPTStorylinesViewModel *_viewModel;
    SPTStorylinesNowPlayingViewControllerFactory *_viewControllerFactory;
    SPTStorylinesNowPlayingViewController *_viewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTStorylinesNowPlayingViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) SPTStorylinesNowPlayingViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(readonly, nonatomic) SPTStorylinesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTStorylinesEnabledManager *enabledManager; // @synthesize enabledManager=_enabledManager;
- (void)didBecomeFullyShownForTrack:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (id)componentViewForTrack:(id)arg1;
- (void)loadContentForTrack:(id)arg1;
- (_Bool)isEnabledForTrack:(id)arg1;
- (id)identifier;
- (id)initWithStorylinesEnabledManager:(id)arg1 viewModel:(id)arg2 viewControllerFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTNowPlayingScrollProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

