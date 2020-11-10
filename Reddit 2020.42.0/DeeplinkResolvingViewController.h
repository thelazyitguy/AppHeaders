//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "DeeplinkResolvingPresentable-Protocol.h"

@class FeedSpinnerView;
@protocol DeeplinkResolvingPresenter;

@interface DeeplinkResolvingViewController : BaseViewController <DeeplinkResolvingPresentable>
{
    id <DeeplinkResolvingPresenter> _presenter;
    FeedSpinnerView *_loadSpinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FeedSpinnerView *loadSpinner; // @synthesize loadSpinner=_loadSpinner;
@property(retain, nonatomic) id <DeeplinkResolvingPresenter> presenter; // @synthesize presenter=_presenter;
- (void)showErrorToast;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)configureWithPresenter:(id)arg1;

@end
