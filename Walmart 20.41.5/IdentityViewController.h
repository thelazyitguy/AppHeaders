//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/BaseRNViewController.h>

#import <WalmartCore/WalmartNavigationProtocol-Protocol.h>

@class NSString;

@interface IdentityViewController : BaseRNViewController <WalmartNavigationProtocol>
{
    _Bool _isRootComponent;
    CDUnknownBlockType _canceledCallback;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRootComponent; // @synthesize isRootComponent=_isRootComponent;
@property(copy, nonatomic) CDUnknownBlockType canceledCallback; // @synthesize canceledCallback=_canceledCallback;
- (void)handleNavigationRequestWithPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)cancelButtonAction:(id)arg1;
- (void)configureNavBar;
- (void)viewDidLoad;
- (id)initWithProperties:(id)arg1 withMiniAppName:(id)arg2 isRootComponent:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
