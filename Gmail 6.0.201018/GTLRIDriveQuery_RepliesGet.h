//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRIDriveQuery.h"

@class NSString;

@interface GTLRIDriveQuery_RepliesGet : GTLRIDriveQuery
{
}

+ (id)queryWithFileId:(id)arg1 commentId:(id)arg2 replyId:(id)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *commentId; // @dynamic commentId;
@property(copy, nonatomic) NSString *fileId; // @dynamic fileId;
@property(nonatomic) _Bool includeDeleted; // @dynamic includeDeleted;
@property(copy, nonatomic) NSString *replyId; // @dynamic replyId;

@end
