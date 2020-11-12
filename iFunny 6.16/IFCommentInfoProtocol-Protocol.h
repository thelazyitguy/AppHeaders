//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FNROContent, FNROUser, NSNumber, NSString;

@protocol IFCommentInfoProtocol <NSObject>
@property(retain, nonatomic) NSNumber *is_highlighted;
@property(readonly, nonatomic) NSString *deletionReason;
@property(retain, nonatomic) FNROContent *content;
@property(readonly, nonatomic) NSString *contentBgColor;
@property(readonly, nonatomic) NSString *thumbUrl;
@property(retain, nonatomic) NSString *state;
@property(readonly, nonatomic) FNROUser *user;
@property(readonly, nonatomic) unsigned long long commentDepth;
@property(readonly, nonatomic) NSString *dateCreateText;
@property(readonly, nonatomic) NSString *numSmileText;
@property(readonly, nonatomic) NSString *userNick;
@property(readonly, nonatomic) NSString *avatarBgColor;
@property(readonly, nonatomic) NSString *avatarUrlSmall;
@property(readonly, nonatomic) NSString *avatarUrlLarge;
@property(readonly, nonatomic) NSString *commentText;
@property(readonly, nonatomic) NSString *commentState;
@property(readonly, nonatomic) double dateCreate;
@property(readonly, nonatomic) NSString *numRepliesText;
@property(readonly, nonatomic) unsigned long long numReplies;
@property(readonly, nonatomic) unsigned long long numUnsmiles;
@property(readonly, nonatomic) unsigned long long numSmiles;
@property(readonly, nonatomic) _Bool isEdited;
@property(readonly, nonatomic) _Bool isSmiled;
@property(readonly, nonatomic) _Bool isUnsmiled;
@property(readonly, nonatomic) NSString *ID;
@end
