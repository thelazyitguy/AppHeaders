//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OGLDrawerChildViewControllerDelegate-Protocol.h"

@class MDCAppBarViewController, NSString, UIView;
@protocol OGLDrawerHeader, OGLDrawerMainContent, OGLTheming;

@interface OGLDrawerContentWithHeaderViewController : UIViewController <OGLDrawerChildViewControllerDelegate>
{
    UIViewController<OGLDrawerMainContent> *_mainContentViewController;
    UIViewController<OGLDrawerHeader> *_headerViewController;
    id <OGLTheming> _oglTheme;
    MDCAppBarViewController *_appBarViewController;
    UIView *_opaqueBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *opaqueBackgroundView; // @synthesize opaqueBackgroundView=_opaqueBackgroundView;
@property(retain, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
@property(readonly, nonatomic) id <OGLTheming> oglTheme; // @synthesize oglTheme=_oglTheme;
@property(readonly, nonatomic) UIViewController<OGLDrawerHeader> *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(readonly, nonatomic) UIViewController<OGLDrawerMainContent> *mainContentViewController; // @synthesize mainContentViewController=_mainContentViewController;
- (struct CGPoint)initialContentOffset;
- (void)drawerChildViewController:(id)arg1 setHeaderDividerHidden:(_Bool)arg2;
- (void)drawerChildViewController:(id)arg1 makeMainContentTopVisibleAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawerChildViewControllerHideDrawerWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)drawerChildViewControllerCanHideDrawer;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMainContentViewController:(id)arg1 headerViewController:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
