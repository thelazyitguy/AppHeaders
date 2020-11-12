//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IMRenderViewDismissDelegate-Protocol.h>

@class IMBitMapUtil, IMRenderView, NSString;
@protocol IMRenderViewControllerBitmapDelegate;

@interface IMRenderViewController : UIViewController <IMRenderViewDismissDelegate>
{
    _Bool _willDismiss;
    _Bool _shouldFitInSafeArea;
    _Bool _shouldApplyBitmap;
    IMRenderView *_renderView;
    id <IMRenderViewControllerBitmapDelegate> _delegate;
    IMBitMapUtil *_bitmapUtil;
    long long _intType;
    NSString *_accountID;
}

@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long intType; // @synthesize intType=_intType;
@property(retain, nonatomic) IMBitMapUtil *bitmapUtil; // @synthesize bitmapUtil=_bitmapUtil;
@property(nonatomic) _Bool shouldApplyBitmap; // @synthesize shouldApplyBitmap=_shouldApplyBitmap;
@property(nonatomic) _Bool shouldFitInSafeArea; // @synthesize shouldFitInSafeArea=_shouldFitInSafeArea;
@property(nonatomic) _Bool willDismiss; // @synthesize willDismiss=_willDismiss;
@property(nonatomic) __weak id <IMRenderViewControllerBitmapDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMRenderView *renderView; // @synthesize renderView=_renderView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (_Bool)imRenderViewHasPresentedScreen:(id)arg1;
- (_Bool)imRenderViewShouldFireViewableEventsForPresentationAndDismiss:(id)arg1;
- (void)imRenderViewDismissCalled:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentRenderViewControllerFromParent:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)rootViewController;
- (_Bool)loadRequest:(id)arg1;
- (_Bool)loadHtmlString:(id)arg1;
- (id)initWithRenderView:(id)arg1 shouldFitInSafeAreaBounds:(_Bool)arg2 withUnsafeAreaColor:(id)arg3 shouldApplyBitmap:(_Bool)arg4 integrationType:(long long)arg5 forAccountID:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
