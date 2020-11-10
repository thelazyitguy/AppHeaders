//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOAlertViewDelegate-Protocol.h>
#import <Module_Framework/YTPlayabilityResolutionUIProtocol-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, YTAlertView;
@protocol YTResponder;

@interface YTPlayabilityResolutionLoginAlertViewController : NSObject <YTResponder, YTPlayabilityResolutionUIProtocol, GOOAlertViewDelegate>
{
    YTAlertView *_loginAlert;
    NSString *_title;
    NSString *_subtitle;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)alertViewDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)cancelCurrentDialog;
- (void)showDialogWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithParentResponder:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

