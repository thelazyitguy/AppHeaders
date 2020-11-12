//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AXFWishListToastViewDelegate-Protocol.h"

@class AXFWishListToastPresenter, NSString, UIView;

@interface AXFWishListToastViewController : UIViewController <AXFWishListToastViewDelegate>
{
    AXFWishListToastPresenter *_presenter;
    UIView *_toastView;
}

@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) AXFWishListToastPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)handleShowBottomSheetEvent;
- (void)handleErrorToastTap:(id)arg1;
- (void)handleToastTap:(id)arg1;
- (void)showToastView;
- (void)hideToastView;
- (id)makeErrorToastWithAttributedText:(id)arg1;
- (id)makeWishListToastLabelWithAttributedText:(id)arg1;
- (id)makeWishListToastWithAttributedText:(id)arg1;
- (void)showAnimationOnView:(id)arg1;
- (void)displayToastWithText:(id)arg1 forDuration:(double)arg2 isError:(_Bool)arg3 showAnimation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setupView;
- (void)viewDidLoad;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
