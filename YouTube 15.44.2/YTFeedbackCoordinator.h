//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSString, UIImage;
@protocol YTResponder;

@interface YTFeedbackCoordinator : NSObject <YTSystemNotificationsObserver, YTResponder>
{
    UIImage *_feedbackSnapshot;
    _Bool _shouldTriggerFeedbackOnScreenShot;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTriggerFeedbackOnScreenShot; // @synthesize shouldTriggerFeedbackOnScreenShot=_shouldTriggerFeedbackOnScreenShot;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)showFeedbackPanel;
- (void)showAlertView;
- (id)storedSnapshot;
- (void)userDidTakeScreenshot;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

