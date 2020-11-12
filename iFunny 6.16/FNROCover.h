//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNROBaseObject.h>

#import <Funny/FNWaterfallCollectionModelItem-Protocol.h>
#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class NSString, UIColor;

@interface FNROCover : FNROBaseObject <FNWaterfallCollectionModelItem, IFNetworkResponseMappable>
{
    NSString *_url;
    NSString *_thumb_url;
    NSString *_cover_hash;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cover_hash; // @synthesize cover_hash=_cover_hash;
@property(retain, nonatomic) NSString *thumb_url; // @synthesize thumb_url=_thumb_url;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) _Bool isUserBannedContentCreation;
@property(readonly, nonatomic) NSString *state;
@property(readonly, nonatomic) _Bool isBlockedCreator;
@property(readonly, nonatomic) _Bool isBanned;
@property(readonly, nonatomic) NSString *sourceCreatorId;
@property(readonly, nonatomic) NSString *creatorId;
@property(readonly, nonatomic) _Bool isShot;
@property(readonly, nonatomic) _Bool isPinned;
@property(readonly, nonatomic) _Bool isUpload;
@property(readonly, nonatomic) _Bool isFeatured;
@property(readonly, nonatomic) _Bool isRepub;
@property(readonly, nonatomic) _Bool isGif;
@property(readonly, nonatomic) _Bool isVideo;
- (struct CGSize)previewSize;
@property(readonly, nonatomic) UIColor *uicolor;
@property(readonly, nonatomic) NSString *imageURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
