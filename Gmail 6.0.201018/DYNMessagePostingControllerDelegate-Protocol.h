//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DYNMessageEditContent, DYNMessagePostingController;
@protocol DYNMessage, DYNTopicId, GIPAccountID;

@protocol DYNMessagePostingControllerDelegate
- (void)postingController:(DYNMessagePostingController *)arg1 didRemovePendingEdit:(DYNMessageEditContent *)arg2;
- (void)postingController:(DYNMessagePostingController *)arg1 didAddPendingEdit:(DYNMessageEditContent *)arg2;
- (void)postingController:(DYNMessagePostingController *)arg1 changedTopicID:(id <DYNTopicId>)arg2 accountID:(id <GIPAccountID>)arg3;
- (void)postingController:(DYNMessagePostingController *)arg1 didPostMessage:(id <DYNMessage>)arg2;
- (void)postingControllerDidFinishPostingMessages:(DYNMessagePostingController *)arg1;
@end
