//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol ModalShimContainerDelegateProtocol;

@protocol ModalShimContainerViewProtocol <NSObject>
- (void)setShimDelegate:(id <ModalShimContainerDelegateProtocol>)arg1;
- (struct CGSize)sizeForContent;
- (UIView *)viewForContent;

@optional
- (void)setParentConstraints:(UIView *)arg1;
- (void)setupView;
- (void)animateIn:(UIView *)arg1;
- (void)viewWillBeDismissed:(id <ModalShimContainerDelegateProtocol>)arg1;
- (UIViewController *)viewControllerForContent;
@end

