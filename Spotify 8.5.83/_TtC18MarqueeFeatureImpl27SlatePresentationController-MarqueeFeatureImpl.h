//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC18MarqueeFeatureImpl27SlatePresentationController.h"

#import "SPTSlateWireframeCustomPresentationDelegate-Protocol.h"

@interface _TtC18MarqueeFeatureImpl27SlatePresentationController (MarqueeFeatureImpl) <SPTSlateWireframeCustomPresentationDelegate>
- (id)contentUnitForSlateViewController:(id)arg1;
- (double)preferredHorizontalMargin;
- (id)dismissTextForSlate:(id)arg1;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (void)slateDidDismiss:(id)arg1;
- (void)slateSwiped:(id)arg1;
- (void)dismissSlateViewControllerInCustomMode:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSlateViewControllerInCustomMode:(id)arg1 animated:(_Bool)arg2;
@end

