//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRUser, NSString;

@interface AIRWishlistMember : AIRModel
{
    AIRUser *_user;
    NSString *_wishlistID;
}

+ (id)addMemberToWishlistWithID:(id)arg1 inviteCode:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)addMemberWithEmail:(id)arg1 toWishlistWithID:(id)arg2 session:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)getMembersOfWishlistWithID:(id)arg1 session:(id)arg2 useCache:(_Bool)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *wishlistID; // @synthesize wishlistID=_wishlistID;
@property(readonly, nonatomic) AIRUser *user; // @synthesize user=_user;
- (id)removeMemberFromWishlistWithID:(id)arg1 session:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;

@end
