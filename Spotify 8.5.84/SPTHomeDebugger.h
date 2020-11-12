//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeViewControllerViewObserver-Protocol.h"
#import "SPTHomeViewModelProviderObserver-Protocol.h"

@class MessageBarAlertItem, MessageBarController, NSString, SPTHomeContentStorage;

@interface SPTHomeDebugger : NSObject <SPTHomeViewModelProviderObserver, SPTHomeViewControllerViewObserver>
{
    MessageBarController *_messageBarController;
    SPTHomeContentStorage *_homeContentStorage;
    MessageBarAlertItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MessageBarAlertItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak SPTHomeContentStorage *homeContentStorage; // @synthesize homeContentStorage=_homeContentStorage;
@property(readonly, nonatomic) MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
- (void)presentMessageBarWithText:(id)arg1;
- (void)viewController:(id)arg1 viewWillDisappear:(id)arg2 animated:(_Bool)arg3;
- (void)viewController:(id)arg1 viewWillAppear:(id)arg2 animated:(_Bool)arg3;
- (void)didLoadRemoteViewModel:(id)arg1 withError:(id)arg2;
- (void)didLoadCachedViewModel:(id)arg1 withError:(id)arg2;
- (void)viewModelProvider:(id)arg1 didLoadViewModel:(id)arg2 fromSource:(unsigned long long)arg3 withError:(id)arg4;
- (void)viewModelProvider:(id)arg1 willLoadFromSource:(unsigned long long)arg2;
- (id)initWithMessageBarController:(id)arg1 homeContentStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
