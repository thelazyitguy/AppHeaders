//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsDynamiteV1SharedUtilRelationshipExternalUserDecider;
@protocol DYNSCommonDynamiteClock;

@interface DYNSDataUiUserConverter : NSObject
{
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    ComGoogleAppsDynamiteV1SharedUtilRelationshipExternalUserDecider *externalUserDecider_;
}

- (void)dealloc;
- (id)fromAutocompleteBotsResponseProtoWithDYNProtoAutocompleteBotsResponse:(id)arg1 withDYNSModelsCommonPresenceState:(id)arg2;
- (id)fromProtoWithDYNProtoUser:(id)arg1;
- (id)createDefaultUserWithDYNSCommonUserId:(id)arg1;
- (id)convertAllWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)convertWithDYNSDataModelsUser:(id)arg1;

@end
