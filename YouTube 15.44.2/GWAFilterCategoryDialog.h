//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAButtonViewDelegate-Protocol.h>
#import <Module_Framework/GWAFlowSectionDelegate-Protocol.h>
#import <Module_Framework/GWATriggerComponent-Protocol.h>

@class GOOAlertView, GWADependencyGraph, GWAFilterCategory, NSString;
@protocol GWAFilterCategoryDialogDelegate;

@interface GWAFilterCategoryDialog : NSObject <GWAButtonViewDelegate, GWAFlowSectionDelegate, GWATriggerComponent>
{
    GWAFilterCategory *_filterCategory;
    unsigned long long _style;
    GOOAlertView *_alertView;
    GWADependencyGraph *_dependencyGraph;
    id <GWAFilterCategoryDialogDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GWAFilterCategoryDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (id)alertView;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)handlePageDetails:(id)arg1;
- (void)section:(id)arg1 presentsErrorMessage:(id)arg2;
- (void)section:(id)arg1 didFinishPendingTaskWithError:(id)arg2;
- (void)section:(id)arg1 uploadParameters:(id)arg2 toURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)forwardToNextFocusableFieldInSection:(id)arg1 field:(id)arg2;
- (void)section:(id)arg1 needsDocumentFromURL:(id)arg2 requestMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)section:(id)arg1 startPollingWithTimeInterval:(double)arg2;
- (void)section:(id)arg1 submitWithActivityIndicator:(_Bool)arg2 dependencyGraphToken:(id)arg3;
- (void)section:(id)arg1 submitWithActivityIndicator:(_Bool)arg2;
- (void)section:(id)arg1 triggeredRefreshWithFormField:(id)arg2;
- (void)sectionWantsFormReload:(id)arg1;
- (void)section:(id)arg1 changedCountryCode:(id)arg2 withAddressValidationToken:(id)arg3;
- (void)section:(id)arg1 changedCountryCode:(id)arg2;
- (void)sectionNeedsExitWidget:(id)arg1;
- (void)section:(id)arg1 dismissModalViewControllerAnimated:(_Bool)arg2;
- (void)section:(id)arg1 presentModalViewController:(id)arg2 animated:(_Bool)arg3;
- (void)sectionWantsFocusAtNextAvailableSection:(id)arg1;
- (void)section:(id)arg1 wantsFocusAtIndexPath:(id)arg2;
- (void)sectionNeedsReload:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)reloadAlertViewWithStyleMaterial:(id)arg1;
- (id)alertViewWithStyleMaterial;
- (id)filterCategoryValue;
- (void)show;
- (id)initWithFilterCategory:(id)arg1 context:(id)arg2 dependencyGraph:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

