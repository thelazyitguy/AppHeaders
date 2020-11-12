//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class Channel, ChatFeedInteractor, NSString, UIViewController;
@protocol AccountContext;

@interface ChatMessageActionSheetDelegate : NSObject <RUIActionSheetViewControllerDelegate>
{
    id <AccountContext> _accountContext;
    UIViewController *_viewController;
    Channel *_channel;
    ChatFeedInteractor *_chatFeedInteractor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ChatFeedInteractor *chatFeedInteractor; // @synthesize chatFeedInteractor=_chatFeedInteractor;
@property(readonly, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)didPressDelete:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (id)initWith:(id)arg1 viewController:(id)arg2 channel:(id)arg3 chatFeedInteractor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
