//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTISmartMailComponentActions-Protocol.h"

@class ComGoogleCaribouSmartmailGenericSmartMail, JBTIActionsHelper, JBTISmartMailComponentContextImpl, JBTLoggingUserActionRecorder, NSString;
@protocol ComGoogleCommonTimeClock, JBTGenericSmartMailHtmlRenderer, JBTIFormattedTextParser, JBTISmartMailCommandApplier, JBTISmartMailTranslationHelper, JavaUtilList;

@interface JBTIGenericSmartMailImpl_1 : NSObject <JBTISmartMailComponentActions>
{
    JBTISmartMailComponentContextImpl *val$smartMailContext_;
    JBTIActionsHelper *val$actionsHelper_;
    id <JavaUtilList> val$actionProtos_;
    id <ComGoogleCommonTimeClock> val$clock_;
    id <JBTISmartMailCommandApplier> val$commandApplier_;
    id <JBTIFormattedTextParser> val$formattedTextParser_;
    id <JBTISmartMailTranslationHelper> val$translationHelper_;
    ComGoogleCaribouSmartmailGenericSmartMail *val$genericSmartMailProto_;
    id <JBTGenericSmartMailHtmlRenderer> val$genericSmartMailHtmlRenderer_;
    JBTLoggingUserActionRecorder *val$userActionRecorder_;
}

- (void)dealloc;
- (id)get;
- (id)getWithJBTSmartMailComponent_ViewMode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
