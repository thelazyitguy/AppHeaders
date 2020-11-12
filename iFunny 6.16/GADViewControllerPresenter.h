//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GADPresenting-Protocol.h>

@class GADEventContext, GADWindowScene, NSString, UIViewController;

@interface GADViewControllerPresenter : NSObject <GADPresenting>
{
    UIViewController *_viewController;
    GADEventContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak GADWindowScene *windowScene;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPresentFromViewController:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) GADEventContext *context;
- (id)init;
- (id)initWithViewController:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
