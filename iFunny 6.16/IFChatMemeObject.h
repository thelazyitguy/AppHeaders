//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFMemeMessageContentProtocol-Protocol.h>

@class NSString;
@protocol IFChatUserEntity;

@interface IFChatMemeObject : NSObject <IFMemeMessageContentProtocol>
{
    _Bool _isOldWatermark;
    NSString *_memeId;
    NSString *_contentType;
    NSObject<IFChatUserEntity> *_creator;
    NSString *_thumbUrl;
    NSString *_shot_status;
    NSString *_contentUrl;
    struct CGSize _memeSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize memeSize; // @synthesize memeSize=_memeSize;
@property(nonatomic) _Bool isOldWatermark; // @synthesize isOldWatermark=_isOldWatermark;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) NSString *shot_status; // @synthesize shot_status=_shot_status;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSObject<IFChatUserEntity> *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *memeId; // @synthesize memeId=_memeId;
- (id)initWithRlmObject:(id)arg1;

@end
