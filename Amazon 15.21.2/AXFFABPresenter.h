//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXFFABPresenterInterface-Protocol.h"

@class NSString;
@protocol AXFFABViewDelegate;

@interface AXFFABPresenter : NSObject <AXFFABPresenterInterface>
{
    double _totalContentHeight;
    id <AXFFABViewDelegate> _viewDelegate;
    struct CGRect _currentParentFrame;
}

@property(nonatomic) struct CGRect currentParentFrame; // @synthesize currentParentFrame=_currentParentFrame;
@property(nonatomic) __weak id <AXFFABViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) double totalContentHeight; // @synthesize totalContentHeight=_totalContentHeight;
- (void).cxx_destruct;
- (void)updateStateWithNewParentFrame:(struct CGRect)arg1;
- (void)navigateToViewController:(id)arg1 withScreenType:(long long)arg2 newContentViewMaxFrame:(struct CGRect)arg3;
- (void)buttonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)setFABViewDelegate:(id)arg1;
- (id)initWithContentViewMaxFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
