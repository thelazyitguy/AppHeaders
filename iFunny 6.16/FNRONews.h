//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFActivityCellModelProtocol-Protocol.h>
#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class FNROComment, FNROContent, FNROUser, NSArray, NSNumber, NSString, NSURL, UIColor;

@interface FNRONews : NSObject <IFActivityCellModelProtocol, IFNetworkResponseMappable>
{
    NSString *_type;
    NSNumber *_date;
    NSNumber *_days;
    NSNumber *_date_until;
    NSNumber *_smiles;
    FNROComment *_comment;
    FNROComment *_reply;
    FNROUser *_user;
    FNROContent *_content;
    NSString *_text;
    NSString *_url;
    NSString *_banId;
    NSString *_banType;
    NSString *_title;
    NSString *_username;
    NSString *_strikeId;
    NSNumber *_expiredAt;
    NSNumber *_countActiveStrike;
    FNROContent *_mention_content;
    NSArray *_mention_users;
    NSNumber *_levelValue;
    NSString *_ratingLevelId;
    NSString *_achievementId;
    NSString *_imageUrl;
    NSString *_purchaseType;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *purchaseType; // @synthesize purchaseType=_purchaseType;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *achievementId; // @synthesize achievementId=_achievementId;
@property(copy, nonatomic) NSString *ratingLevelId; // @synthesize ratingLevelId=_ratingLevelId;
@property(retain, nonatomic) NSNumber *levelValue; // @synthesize levelValue=_levelValue;
@property(copy, nonatomic) NSArray *mention_users; // @synthesize mention_users=_mention_users;
@property(retain, nonatomic) FNROContent *mention_content; // @synthesize mention_content=_mention_content;
@property(retain, nonatomic) NSNumber *countActiveStrike; // @synthesize countActiveStrike=_countActiveStrike;
@property(retain, nonatomic) NSNumber *expiredAt; // @synthesize expiredAt=_expiredAt;
@property(copy, nonatomic) NSString *strikeId; // @synthesize strikeId=_strikeId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *banType; // @synthesize banType=_banType;
@property(retain, nonatomic) NSString *banId; // @synthesize banId=_banId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) FNROContent *content; // @synthesize content=_content;
@property(retain, nonatomic) FNROUser *user; // @synthesize user=_user;
@property(retain, nonatomic) FNROComment *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) FNROComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSNumber *smiles; // @synthesize smiles=_smiles;
@property(retain, nonatomic) NSNumber *date_until; // @synthesize date_until=_date_until;
@property(retain, nonatomic) NSNumber *days; // @synthesize days=_days;
@property(retain, nonatomic) NSNumber *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) FNROComment *replyNews;
@property(readonly, nonatomic) FNROComment *commentNews;
@property(readonly, nonatomic) FNROComment *commentOrReply;
@property(readonly, nonatomic) NSString *commentString;
- (id)contentSmiles;
@property(readonly, nonatomic) NSNumber *smilesCount;
@property(readonly, nonatomic) UIColor *nicknameColor;
@property(readonly, nonatomic) NSString *nickname;
@property(readonly, nonatomic) NSURL *contentImageUrl;
@property(readonly, nonatomic) NSURL *avatarUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

