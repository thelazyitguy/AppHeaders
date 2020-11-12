//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/STKMRAIDAdDelegate-Protocol.h>
#import <Funny/STKMRAIDViewPresenterDelegate-Protocol.h>

@class NSString, STKMRAIDAd, STKMRAIDViewPresenter;
@protocol STKVASTHTMLCompanionRendererDelegate;

@interface STKVASTHTMLCompanionRenderer : UIView <STKMRAIDAdDelegate, STKMRAIDViewPresenterDelegate>
{
    _Bool _isViewable;
    _Bool _isReady;
    id <STKVASTHTMLCompanionRendererDelegate> _delegate;
    STKMRAIDAd *_creative;
    STKMRAIDViewPresenter *_presenter;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(retain, nonatomic) STKMRAIDViewPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) STKMRAIDAd *creative; // @synthesize creative=_creative;
@property(nonatomic) __weak id <STKVASTHTMLCompanionRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) _Bool isViewable; // @synthesize isViewable=_isViewable;
- (void)presenterDidBecomeUnavailable:(id)arg1 withError:(id)arg2;
- (id)presenterRootViewController;
- (_Bool)presenterShouldResize:(id)arg1 toPosition:(struct CGRect)arg2;
- (void)didUserInteractionAd:(id)arg1 withURL:(id)arg2;
- (void)didFailToLoadAd:(id)arg1 withError:(id)arg2;
- (void)didLoadAd:(id)arg1;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (void)present;
- (void)loadWithHTML:(id)arg1;
- (void)loadWithURL:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
