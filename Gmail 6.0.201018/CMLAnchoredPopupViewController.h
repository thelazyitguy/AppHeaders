//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface CMLAnchoredPopupViewController : UIViewController
{
    UIView *popupView_;
    _Bool useFullScreenWidth_;
    _Bool addSafeAreaInsets_;
}

- (void).cxx_destruct;
- (double)horizontalInset;
- (id)rootView;
- (void)layoutPopupView;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPopupView:(id)arg1 useFullScreenWidth:(_Bool)arg2 addSafeAreaInsets:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

