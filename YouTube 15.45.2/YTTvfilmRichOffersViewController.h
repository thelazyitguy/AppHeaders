//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import "YTResponder-Protocol.h"
#import "YTStoreKitTransactionObserver-Protocol.h"
#import "YTTopController-Protocol.h"
#import "YTTvfilmRichOffersViewDelegate-Protocol.h"

@class GIMMe, NSString, UIScrollView, YTActivityWaitViewController, YTCommandResponderEvent, YTITvfilmRichOffersRenderer, YTTvfilmRichOffersView;
@protocol YTResponder;

@interface YTTvfilmRichOffersViewController : YTStyledViewController <YTTopController, YTResponder, YTTvfilmRichOffersViewDelegate, YTStoreKitTransactionObserver>
{
    YTITvfilmRichOffersRenderer *_renderer;
    YTTvfilmRichOffersView *_richOffersView;
    UIScrollView *_scrollView;
    id _strongResponderChain;
    YTActivityWaitViewController *_waitViewController;
    id <YTResponder> _parentResponder;
}

+ (void)presentWithRenderer:(id)arg1 responder:(id)arg2 gimme:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)strongResponderChain;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)registerEventHandlers;
- (void)tvfilmRichOffersView:(id)arg1 didTapNavigationEndpoint:(id)arg2;
- (void)transaction:(id)arg1 statusDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)transaction:(id)arg1 statusWillChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)startPurchaseWithCommand:(id)arg1;
- (void)didTapBackButton;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithResponder:(id)arg1 renderer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

