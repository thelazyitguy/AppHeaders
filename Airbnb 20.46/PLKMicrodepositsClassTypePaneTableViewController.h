//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkKit/PLKMfaSelectionPaneTableViewController.h>

#import <LinkKit/PLKFlowCoordinated-Protocol.h>

@class NSString, PLKFlowContext;
@protocol PLKFlowCoordinator;

@interface PLKMicrodepositsClassTypePaneTableViewController : PLKMfaSelectionPaneTableViewController <PLKFlowCoordinated>
{
}

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) PLKFlowContext *flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
