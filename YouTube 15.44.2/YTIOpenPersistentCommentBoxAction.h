//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTICommentActionConfirmDialogSupportedRenderers, YTIPersistentCommentBoxSupportedRenderers;

@interface YTIOpenPersistentCommentBoxAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommentActionConfirmDialogSupportedRenderers *commentWithoutVoteDialog; // @dynamic commentWithoutVoteDialog;
@property(retain, nonatomic) YTIPersistentCommentBoxSupportedRenderers *dialog; // @dynamic dialog;
@property(nonatomic) _Bool hasCommentWithoutVoteDialog; // @dynamic hasCommentWithoutVoteDialog;
@property(nonatomic) _Bool hasDialog; // @dynamic hasDialog;
@property(nonatomic) _Bool hasNoMoreCommentDialog; // @dynamic hasNoMoreCommentDialog;
@property(nonatomic) _Bool hasPrepareAccountEndpoint; // @dynamic hasPrepareAccountEndpoint;
@property(nonatomic) _Bool hasScrollingBehavior; // @dynamic hasScrollingBehavior;
@property(nonatomic) _Bool hasShowInputView; // @dynamic hasShowInputView;
@property(retain, nonatomic) YTICommentActionConfirmDialogSupportedRenderers *noMoreCommentDialog; // @dynamic noMoreCommentDialog;
@property(retain, nonatomic) YTICommand *prepareAccountEndpoint; // @dynamic prepareAccountEndpoint;
@property(nonatomic) int scrollingBehavior; // @dynamic scrollingBehavior;
@property(nonatomic) _Bool showInputView; // @dynamic showInputView;

@end

