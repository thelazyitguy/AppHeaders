//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFCommentInfoProtocol-Protocol.h>
#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class FNROCommentAttachments, FNROCommentNum, FNROContent, FNROUser, NSAttributedString, NSNumber, NSString;

@interface FNROComment : NSObject <IFCommentInfoProtocol, IFNetworkResponseMappable>
{
    NSString *_ID;
    NSString *_commentId;
    NSString *_cid;
    NSString *_root_comm_id;
    NSString *_parent_comm_id;
    NSString *_deletion_reason;
    NSString *_uid;
    NSString *_text;
    NSString *_state;
    NSNumber *_date;
    NSNumber *_is_smiled;
    NSNumber *_is_unsmiled;
    FNROUser *_user;
    NSNumber *_is_highlighted;
    NSNumber *_is_reply;
    NSNumber *_is_edited;
    NSNumber *_depth;
    FNROContent *_content;
    FNROCommentNum *_num;
    FNROCommentAttachments *_attachments;
    FNROComment *_last_reply;
    NSAttributedString *_cachedCommentText;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *cachedCommentText; // @synthesize cachedCommentText=_cachedCommentText;
@property(retain, nonatomic) FNROComment *last_reply; // @synthesize last_reply=_last_reply;
@property(retain, nonatomic) FNROCommentAttachments *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) FNROCommentNum *num; // @synthesize num=_num;
@property(retain, nonatomic) FNROContent *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSNumber *is_edited; // @synthesize is_edited=_is_edited;
@property(retain, nonatomic) NSNumber *is_reply; // @synthesize is_reply=_is_reply;
@property(retain, nonatomic) NSNumber *is_highlighted; // @synthesize is_highlighted=_is_highlighted;
@property(retain, nonatomic) FNROUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *is_unsmiled; // @synthesize is_unsmiled=_is_unsmiled;
@property(retain, nonatomic) NSNumber *is_smiled; // @synthesize is_smiled=_is_smiled;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *deletion_reason; // @synthesize deletion_reason=_deletion_reason;
@property(retain, nonatomic) NSString *parent_comm_id; // @synthesize parent_comm_id=_parent_comm_id;
@property(retain, nonatomic) NSString *root_comm_id; // @synthesize root_comm_id=_root_comm_id;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (long long)commentHash;
- (_Bool)isEqual:(id)arg1;
- (double)contentHeightForWidth:(double)arg1 maxAspectRatio:(double)arg2 isCompressed:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *sharingLink;
- (_Bool)contentIsTapable:(id)arg1;
- (id)contentToShow;
- (_Bool)hasText;
- (_Bool)isFromContent:(id)arg1;
- (_Bool)hasContent;
@property(readonly, nonatomic) NSString *deletionReason;
@property(readonly, nonatomic) NSString *contentBgColor;
@property(readonly, nonatomic) NSString *thumbUrl;
@property(readonly, nonatomic) NSString *dateCreateText;
@property(readonly, nonatomic) NSString *numSmileText;
@property(readonly, nonatomic) unsigned long long commentDepth;
@property(readonly, nonatomic) NSString *commentText;
@property(readonly, nonatomic) NSString *userNick;
@property(readonly, nonatomic) NSString *avatarBgColor;
@property(readonly, nonatomic) NSString *avatarUrlSmall;
@property(readonly, nonatomic) NSString *avatarUrlLarge;
@property(readonly, nonatomic) double dateCreate;
@property(readonly, nonatomic) NSString *numRepliesText;
@property(readonly, nonatomic) unsigned long long numReplies;
@property(readonly, nonatomic) unsigned long long numUnsmiles;
@property(readonly, nonatomic) unsigned long long numSmiles;
@property(readonly, nonatomic) _Bool isEdited;
@property(readonly, nonatomic) _Bool isSmiled;
@property(readonly, nonatomic) _Bool isUnsmiled;
@property(readonly, nonatomic) NSString *commentState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
