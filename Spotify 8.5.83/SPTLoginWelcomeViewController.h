//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitAwareViewController.h"

#import "SPTLoginThirdPartyLoginHandlerDelegate-Protocol.h"
#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTLoginWelcomeViewImageInteractionHandler-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTLoginTheme, SPTLoginWelcomeView, SPTLoginWelcomeViewModel, SPTProgressView, UIViewController;
@protocol GLUEImageLoader, SPTLoginWelcomeButtonViewController, SPTPageContainer;

@interface SPTLoginWelcomeViewController : SPTLoginTraitAwareViewController <SPTNavigationControllerNavigationBarState, SPTLoginThirdPartyLoginHandlerDelegate, SPTLoginWelcomeViewImageInteractionHandler, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    SPTLoginWelcomeViewModel *_viewModel;
    SPTLoginTheme *_theme;
    SPTProgressView *_progressIndicator;
    id <GLUEImageLoader> _imageLoader;
    UIViewController<SPTLoginWelcomeButtonViewController> *_buttonContainerViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController<SPTLoginWelcomeButtonViewController> *buttonContainerViewController; // @synthesize buttonContainerViewController=_buttonContainerViewController;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTProgressView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginWelcomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void)userDidSwipeImage;
- (void)userDidTapImage;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateImageryVisibilitySetting;
- (void)hideProgressIndicator;
- (void)showProgressIndicator;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)handlerDidFinishThirdPartyLogin:(id)arg1;
- (void)handlerDidStartThirdPartyLogin:(id)arg1;
- (id)contextViewControllerForThirdPartyLoginHandler:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 imageLoader:(id)arg3 buttonContainerViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginWelcomeView *view; // @dynamic view;

@end

