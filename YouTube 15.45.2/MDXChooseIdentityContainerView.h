//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCActivityIndicator;

@interface MDXChooseIdentityContainerView : UIView
{
    _Bool _expandExpressSignInView;
    MDCActivityIndicator *_loadingIcon;
    UIView *_backgroundView;
    UIView *_expressSignInView;
    UIView *_loadingView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *expressSignInView; // @synthesize expressSignInView=_expressSignInView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)accessibilityElements;
- (void)showLoadingViewAndHideExpressView;
- (struct CGRect)expressSignInViewBounds;
- (void)layoutSubviews;
- (void)createLoadingScreenWithBounds:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showExpressSignInViewWithCompletion:(CDUnknownBlockType)arg1;

@end
