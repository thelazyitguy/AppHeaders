//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIActionResult, YTIUpdateCommentResponseSupportedRenderers;

@interface YTIUpdateCommentAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIActionResult *actionResult; // @dynamic actionResult;
@property(copy, nonatomic) NSString *commentId; // @dynamic commentId;
@property(retain, nonatomic) YTIUpdateCommentResponseSupportedRenderers *contents; // @dynamic contents;
@property(nonatomic) _Bool hasActionResult; // @dynamic hasActionResult;
@property(nonatomic) _Bool hasCommentId; // @dynamic hasCommentId;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;

@end

